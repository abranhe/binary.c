#include <stdio.h>
#include "binary.h"

int main() {
	printf("%d\n", is_binary(1010));
	printf("%ld\n", to_decimal(10000000011));
	printf("%lld\n", to_binary(1000));
}
