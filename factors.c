#include "factors.h"
/**
 * main - entry point of the program
 * @argc: count of cmd arguments
 * @argv: array of cmd line arguments
 * Return: return nothing
 */
int main(int argc, char **argv)
{
	FILE *fd;
	size_t n;
	ssize_t line;
	char *buf = NULL;

	if (argc != 2)
	{
		dprintf(2, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		dprintf(2, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((line = getline(&buf, &n, fd)) != -1)
	{
		find_factors(buf);
	}
	return (0);
}
