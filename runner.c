#include <stdio.h>
#include <iostream>
#include <cstring>

#include "transformer.h"
#include "tables.h"
#include "fidl.h"

bool cmp_payload(const uint8_t* actual, size_t actual_size, const uint8_t* expected,
                 size_t expected_size) {
  bool pass = true;
  for (size_t i = 0; i < actual_size && i < expected_size; i++) {
    if (actual[i] != expected[i]) {
      pass = false;
      std::cout << std::dec << "element[" << i << "]: " << std::hex << "actual=0x" << +actual[i]
                << " "
                << "expected=0x" << +expected[i] << "\n";
    }
  }
  if (actual_size != expected_size) {
    pass = false;
    std::cout << std::dec << "element[...]: "
              << "actual.size=" << +actual_size << " "
              << "expected.size=" << +expected_size << "\n";
  }
  return pass;
}

uint8_t sandwich1_case1_input[] = {
    0x01, 0x02, 0x03, 0x04, // Sandwich1.before
    0x00, 0x00, 0x00, 0x00, // Sandwich1.before (padding)

    0xdb, 0xf0, 0xc2, 0x7f, // Sandwich1.union.tag
    0x00, 0x00, 0x00, 0x00, // Sandwich1.union.padding
    0x08, 0x00, 0x00, 0x00, // Sandwich1.union.env.num_bytes
    0x00, 0x00, 0x00, 0x00, // Sandwich1.union.env.num_handle
    0xff, 0xff, 0xff, 0xff, // Sandwich1.union.env.presence
    0xff, 0xff, 0xff, 0xff, // Sandwich1.union.env.presence [cont.]

    0x05, 0x06, 0x07, 0x08, // Sandwich1.after
    0x00, 0x00, 0x00, 0x00, // Sandwich1.after (padding)

    0x09, 0x0a, 0x0b, 0x0c, // Sandwich1.union.data
    0x00, 0x00, 0x00, 0x00, // Sandwich1.union.data (padding)
};

uint8_t sandwich1_case1_expected_output[] = {
    0x01, 0x02, 0x03, 0x04, // Sandwich1.before

    0x02, 0x00, 0x00, 0x00, // Sandwich1.union.tag
    0x09, 0x0a, 0x0b, 0x0c, // Sandwich1.union.data

    0x05, 0x06, 0x07, 0x08, // Sandwich1.after
};

uint8_t sandwich2_case1_input[] = {
    0x01, 0x02, 0x03, 0x04, // Sandwich2.before
    0x00, 0x00, 0x00, 0x00, // Sandwich2.before (padding)

    0xbf, 0xd3, 0xd1, 0x20, // Sandwich2.union.tag
    0x00, 0x00, 0x00, 0x00, // Sandwich2.union.padding
    0x08, 0x00, 0x00, 0x00, // Sandwich2.union.env.num_bytes
    0x00, 0x00, 0x00, 0x00, // Sandwich2.union.env.num_handle
    0xff, 0xff, 0xff, 0xff, // Sandwich2.union.env.presence
    0xff, 0xff, 0xff, 0xff, // Sandwich2.union.env.presence [cont.]

    0x05, 0x06, 0x07, 0x08, // Sandwich2.after
    0x00, 0x00, 0x00, 0x00, // Sandwich2.after (padding)

    0xa0, 0xa1, 0xa2, 0xa3, // Sandwich2.union.data
    0xa4, 0xa5, 0x00, 0x00, // Sandwich2.union.data [cont.] and padding
};

uint8_t sandwich2_case1_expected_output[] = {
    0x01, 0x02, 0x03, 0x04, // Sandwich2.before

    0x03, 0x00, 0x00, 0x00, // Sandwich2.union.tag
    0xa0, 0xa1, 0xa2, 0xa3, // Sandwich2.union.data
    0xa4, 0xa5, 0x00, 0x00, // Sandwich2.union.data [cont.] and padding

    0x05, 0x06, 0x07, 0x08, // Sandwich2.after
};

bool run_single_test(const fidl_type_t* src_type,
                     const uint8_t* src_bytes, uint32_t src_num_bytes,
                     const uint8_t* expected_dst_bytes, uint32_t expected_dst_num_bytes) {
    uint8_t actual_dst_bytes[ZX_CHANNEL_MAX_MSG_BYTES];
    uint32_t actual_dst_num_bytes;
    memset(actual_dst_bytes, 0xcc /* poison */, ZX_CHANNEL_MAX_MSG_BYTES);

    const char* error_msg;

    zx_status_t status = fidl_transform_xunion_to_union(
        src_type,
        src_bytes, src_num_bytes,
        actual_dst_bytes, &actual_dst_num_bytes,
        &error_msg);
    if (status != ZX_OK) {
        return false;
    }
    return cmp_payload(
        actual_dst_bytes, actual_dst_num_bytes,
        expected_dst_bytes, expected_dst_num_bytes
        );
}

bool test_sandwich1() {
    return run_single_test(
        &v1_example_Sandwich1Table,
        sandwich1_case1_input, sizeof(sandwich1_case1_input),
        sandwich1_case1_expected_output, sizeof(sandwich1_case1_expected_output)
    );
}

bool test_sandwich2() {
    return run_single_test(
        &v1_example_Sandwich2Table,
        sandwich2_case1_input, sizeof(sandwich2_case1_input),
        sandwich2_case1_expected_output, sizeof(sandwich2_case1_expected_output)
    );
}

int main() {
    {
        zx_status_t status = test_sandwich1();
        printf("test_sandwich1: %d\n", status);
    }
    {
        zx_status_t status = test_sandwich2();
        printf("test_sandwich2: %d\n", status);
    }
    return 0;
}