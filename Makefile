CC=gcc
CFLAGS= -Wall -g

default:
	$(CC) $(CFLAGS) make_test.c -o ./bin/make_test

mta: 
	$(CC) $(CFLAGS) ./make_test_adv/mta.c -o ./bin/mta

midcomp: mid_comp.o
	$(CC) $(CFLAGS) ./obj/mid_comp.o -o ./bin/mid_comp

mid_comp.o:
	$(CC) $(CFLAGS) -c ./obj_test/mid_comp.c -o ./obj/mid_comp.o

header: header_test.o my_header.o
	$(CC) $(CFLAGS) ./obj/my_header.o ./obj/header_test.o -o ./bin/header

header_test.o: 
	$(CC) $(CFLAGS) ./header/my_header.h -o ./obj/my_header.o

my_header.o: 
	$(CC) $(CFLAGS) -c ./header/header_test.c -o ./obj/header_test.o

vp:
	$(CC) $(CFLAGS) ./void_pointer/void_pointer.c -o ./bin/void_pointer

clean:
	rm bin/*

# all: make_test.c


# %.c:
# 	$(CC) $(CFLAGS) -o ./bin/make_test

# all: make_test.o
# 	$(CC) $(CFLAGS) -o ./bin/make_test

# make_test.o: 
# 	$(CC) $(CFLAGS) -c ./obj/make_test


# Makefile

# Specify the source directory where the C files are located (x folder)
# SRC_DIR := make_test_adv

# # Specify the object directory for the .o files (obj folder)
# OBJ_DIR := obj

# # Specify the output directory for the executables (bin folder)
# BIN_DIR := bin

# # Get the list of C files in the source directory
# SRC_FILES := $(wildcard $(SRC_DIR)/*.c)

# # Generate the list of corresponding object files
# OBJ_FILES := $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

# # Compiler and flags
# CC := gcc
# CFLAGS := -Wall -g

# # Rule to build all targets
# all: $(BIN_DIR) $(OBJ_DIR) $(BIN_DIR)/$(notdir $(basename $(SRC_FILES)))

# # Rule to build the object files
# $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
# 	@mkdir -p $(OBJ_DIR)
# 	$(CC) $(CFLAGS) -c -o $@ $<

# # Rule to build the final executable
# $(BIN_DIR)/%: $(OBJ_DIR)/%.o
# 	@mkdir -p $(BIN_DIR)
# 	$(CC) $(CFLAGS) -o $@ $^

# # Clean rule to remove the obj and bin directories and executables
# clean:
# 	@$(RM) -r $(OBJ_DIR) $(BIN_DIR)

# # PHONY targets to avoid conflicts with filenames
# .PHONY: all clean