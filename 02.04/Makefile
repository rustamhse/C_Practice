TARGET = worker
FLAGS = -Wall -Wextra -std=c++20
INCLUDE = include
SRCS = src/main.cpp src/worker.cpp

.PHONY: all build clean run

$(TARGET):
	g++ $(FLAGS) -I $(INCLUDE) $(SRCS) -o $(TARGET)

all: clean build

build: $(TARGET)

clean:
	rm -rf $(TARGET)

run: build
	./$(TARGET)
