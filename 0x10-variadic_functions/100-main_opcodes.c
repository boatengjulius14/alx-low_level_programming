#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, _bytes;
	char *_opcode = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	_bytes = atoi(argv[1]);

	if (_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < _bytes; i++)
	{
		printf("%02x", _opcode[i] & 0xFF);
		if (i != _bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
