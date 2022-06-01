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
	
	int fd1, byco;
	char c[letters];

	fd1 = open(filename,O_RDWR);

	if (fd1 == -1)
		return 0;

	byco = read(fd1,&c,letters);

	write(1,&c,letters);

	if (byco == -1)
		return 0;

	//if (wri == -1)
	//	return 0;

	if (byco < letters)
		return 0;

	return byco;
}	
