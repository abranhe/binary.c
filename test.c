#include <stdio.h>
#include <stdlib.h>

#include "binary.h"

static int assertionCount = 0;
static int errorCount = 0;

static void
to_decimal_test(const long long input, const long expected) {

	long result = to_decimal(input);

	if (result != expected) {
		errorCount++;
	  fprintf(stderr, "\033[31m");
		fprintf(stderr, "  (✖) For the binary number `%lld` expected `%ld`, got `%ld`",
		 	input, expected, result);
	  fprintf(stderr, "\n\033[0m");
	  fprintf(stderr, "\n");
  } else
  {
    printf("\033[32m  (✓) Test passed\033[0m\n");
  }
  assertionCount++;
}

static void
to_binary_test(const long input, const long long expected) {

	long long result = to_binary(input);

	if (result != expected) {
		errorCount++;
	  fprintf(stderr, "\033[31m");
		fprintf(stderr, "  (✖) For the decimal number `%ld` expected `%lld`, got `%lld`",
		 	input, expected, result);
	  fprintf(stderr, "\n\033[0m");
	  fprintf(stderr, "\n");
  } else
  {
    printf("\033[32m  (✓) Test passed\033[0m\n");
  }
  assertionCount++;
}

static void
is_binary_test(const long long input, const bool expected) {

	bool result = is_binary(input);

	if (result != expected) {
		errorCount++;
	  fprintf(stderr, "\033[31m");
		fprintf(stderr, "  (✖) For the decimal number `%lld` expected `%d`, got `%d`",
		 	input, expected, result);
	  fprintf(stderr, "\n\033[0m");
	  fprintf(stderr, "\n");
  } else
  {
    printf("\033[32m  (✓) Test passed\033[0m\n");
  }
  assertionCount++;
}

int
main() {
	to_decimal_test(1001001, 73);
	to_decimal_test(1, 1);
	to_decimal_test(111, 7);
	to_decimal_test(11, 3);
	to_decimal_test(0, 0);

	to_binary_test(73, 1001001);
	to_binary_test(1, 1);
	to_binary_test(7, 111);
	to_binary_test(3, 11);
	to_binary_test(0, 0);

	is_binary_test(111, 1);
	is_binary_test(3377, 0);
	is_binary_test(10101010, 1);
	is_binary_test(19, 0);
	is_binary_test(77777, 0);

  // Log total errors.
  printf("\n");

  if (errorCount != 0) {
    printf("\033[31m");
    printf("(✖) Failed on %d of %d assertions", errorCount, assertionCount);
    printf("\033[0m");
    printf("\n");
    exit(EXIT_FAILURE);
  }

  // Or, log total successes.
  printf("\033[32m");
  printf("(✓) Passed %d assertions without errors", assertionCount);
  printf("\033[0m");
  printf("\n");

  return 0;
}
