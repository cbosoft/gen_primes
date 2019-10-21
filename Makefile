CC = gcc
CFLAGS = -Ofast -Wall -Wextra
SRC = gen_primes.c


gen_primes: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@
