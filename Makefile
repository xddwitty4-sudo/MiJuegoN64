
BUILD_DIR=build
include $(N64_INST)/include/n64.mk

all: MiJuegoN64.z64

MiJuegoN64.z64: $(BUILD_DIR)/main.dfs

$(BUILD_DIR)/main.dfs: $(wildcard filesystem/*)

clean:
	rm -rf $(BUILD_DIR) *.z64

.PHONY: all clean
