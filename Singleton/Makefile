-include ../colors.mk

CC := g++
CFLAGS := -std=c++11 -Wall -Werror

CPP_FILES := $(wildcard src/*.cpp)
OBJ_FILES :=$(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))

TARGET_NAME := Singleton
TARGET_DIR 	:= bin/

all: $(OBJ_FILES)
	@ echo "${Y}Building ${TARGET_NAME}${N}"
	@ mkdir -p $(TARGET_DIR)
	@ echo "${P}Linking...${N}"
	@ ${CC} $^ -o $(TARGET_DIR)$(TARGET_NAME)

obj/%.o: src/%.cpp
	@ mkdir -p obj
	@ echo "${B}Compiling${N} ${R}$<${N}"
	@ g++ $(CFLAGS) -c -o $@ $<

clean:
	@echo "${R}Cleaning ${TARGET_NAME}${N}"
	@rm -rf bin/
	@rm -rf obj/

.PHONY: clean
