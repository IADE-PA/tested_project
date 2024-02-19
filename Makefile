CFLAGS = -g -Wall -Wextra -Werror

all: my_math_test

test: my_math_test
	./my_math_test

my_math.o: src/my_math.c
	gcc -c $(CFLAGS) $< -o $@

unity.o: test/unity/unity.c
	gcc -c $(CFLAGS) $< -o $@

my_math_test: test/my_math_test.c my_math.o unity.o
	gcc $(CFLAGS) $^ -o $@

clean:
	rm -f my_math_test my_math.o unity.o
