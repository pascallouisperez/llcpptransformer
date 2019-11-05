main: $(glob *.cc *.h *.fidl) tables.h transformer_tests.cc
	clang++ \
		-std=c++14 \
		-Weverything \
		-Wno-old-style-cast \
		-Wno-padded \
		-Wno-missing-prototypes \
		-Wno-missing-variable-declarations \
		-Wno-unused-macros -Wno-zero-length-array \
		-Wno-global-constructors \
		-Wno-shadow-field-in-constructor \
		-Wno-c++98-compat-pedantic \
		-Wno-used-but-marked-unused \
		-Wunused-parameter \
		-idirafter "." \
		-g -O0 \
		-fsanitize=address -fno-omit-frame-pointer -fno-optimize-sibling-calls \
		-o main \
		transformer.cc transformer_tests.cc fidl.cc

tables.h: transformer.test.fidl
	$$FUCHSIA_DIR/out/default/host_x64/fidlc --tables $@ --json $<.json --files $<
	sed 's,#include <lib/fidl/internal.h>,#include "fidl.h",' -i $@

clean:
	rm -f main

fromf:
	cp $$FUCHSIA_DIR/zircon/system/utest/fidl/transformer.test.fidl .
	cp $$FUCHSIA_DIR/zircon/system/utest/fidl/transformer_tests.cc .
	cp $$FUCHSIA_DIR/zircon/system/ulib/fidl/transformer.cc .

tof:
	cp transformer.test.fidl $$FUCHSIA_DIR/zircon/system/utest/fidl/
	cp transformer_tests.cc $$FUCHSIA_DIR/zircon/system/utest/fidl/
	cp transformer.cc $$FUCHSIA_DIR/zircon/system/ulib/fidl/
