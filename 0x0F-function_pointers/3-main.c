#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int num1, num2, calc;
	int (*func_pt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '%' || *argv[2] == '/') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func_pt = get_op_func(argv[2]);
	calc = func_pt(num1, num2);

	printf("%d\n", calc);
	return (0);
}
