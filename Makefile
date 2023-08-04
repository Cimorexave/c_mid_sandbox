CC=gcc
CFLAGS= -Wall -g

default:
	$(CC) $(CFLAGS) make_test.c -o ./bin/make_test

# all: make_test.c


# %.c:
# 	$(CC) $(CFLAGS) -o ./bin/make_test

# all: make_test.o
# 	$(CC) $(CFLAGS) -o ./bin/make_test

# make_test.o: 
# 	$(CC) $(CFLAGS) -c ./obj/make_test