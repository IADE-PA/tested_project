CFLAGS = -g -Wall -Wextra -Werror
COVFLAGS = -fprofile-arcs -ftest-coverage

all: my_math_test

test: my_math_test
	./my_math_test

cov: my_math_test
	./my_math_test
	gcov my_math.c

my_math.o: src/my_math.c
	gcc -c $(CFLAGS) $(COVFLAGS) $< -o $@

unity.o: test/unity/unity.c
	gcc -c $(CFLAGS) $< -o $@

my_math_test: test/my_math_test.c my_math.o unity.o
	gcc $(CFLAGS) $(COVFLAGS) $^ -o $@

clean:
	rm -f my_math_test my_math.o unity.o
	rm -f *.gcno *.gcda *.gcov
