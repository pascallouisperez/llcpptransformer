#include "fidl.h"

#include <string.h>

size_t fidl_format_type_name(const fidl_type_t* type, char* buffer, size_t capacity) {
    strcpy(buffer, "(fidl_format_type_name mock)");
    return 0;
}
