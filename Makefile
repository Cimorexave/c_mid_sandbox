CC=gcc
CFLAGS= -Wall -g

# all: make_test.c

default:
	$(CC) $(CFLAGS) make_test.c -o ./bin/make_test

# %.c:
# 	$(CC) $(CFLAGS) -o ./bin/make_test