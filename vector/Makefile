TARGET = myVector
FLAGS = -Wall -Wextra -std=c++20
INCLUDE = -I include

SRC_DIR = src
INCLUDE_DIR = include

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
TEST_SRCS = $(wildcard $(TEST_DIR)/*.cpp)

.PHONY: all build clean run

all: build

build: $(TARGET)

$(TARGET): $(SRCS)
	g++ $(FLAGS) $(INCLUDE) $^ -o $@

run: build
	./$(TARGET)

clean:
	rm -rf $(TARGET) $(TEST_TARGET)