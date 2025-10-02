#include <stdio.h>
#include "calc.h"

int main(int argc, char *argv[])
{
	printf("'10 + 2 = %d'\n", add(10, 2));
	printf("'10 - 2 = %d'\n", sub(10, 2));
	printf("'10 * 2 = %d'\n", mul(10, 2));
	printf("'10 / 2 = %d'\n", div(10, 2));
	printf("'10 % 2 = %d'\n", mod(10, 2));
	printf("'10 power two = %d'\n", power_two(10));
	printf("'10 power three = %d'\n", power(10, 3));
	printf("'The magnitude of -3^5 = %d'\n", magnitude(-(power(3,5))));

	int arr[10];
	size_t size = sizeof(arr) / sizeof(arr[0]);
	fill_single_digit_positive_number(arr, size);
	getchar();
	return 0;
}
