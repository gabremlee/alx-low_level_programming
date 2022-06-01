#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return 0;
	
	int fd1, byco, i = 0, count = 0;
	char *c;

	fd1 = open(filename,O_RDONLY);

	if (fd1 == -1)
		return 0;

	byco = read(fd1,c,letters);

	int wri = write(1,&c,1);

	if (byco == -1)
		return 0;

	if (wri == -1)
		return 0;

	if (byco < letters)
		return 0;

	return byco;
}	
