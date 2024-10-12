CC = clang # Flag for implicit rules
CFLAGS = -g -Wall -Iinclude # Flag for implicit rules. Turn on debug info

# Source directory
SRC_DIR = src
BUILD_DIR = build

TARGET = $(BUILD_DIR)

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Object files (output of compilation)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))

# all: $(BUILD_DIR) $(TARGET)
all: $(TARGET)

$(TARGET): $(BUILD_DIR) $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

# Rule to compile source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# hello:
# 	echo "hello, world"
# 	echo "this line will print if the file hello does not exist"

# build:
# 	$(CC) -c ./src/main.c -o ./build/main.out

clean:
	rm -rf $(BUILD_DIR)

# .PHONY to avoid conflict with file names
.PHONY: all clean
