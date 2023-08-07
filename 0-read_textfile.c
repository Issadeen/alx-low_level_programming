#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
*  @filename : Name of the file to read.
* @letters: Number of letters to read and print.
*
* Return: The actual number of letters read and printed. 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t n;
char *buffer;
FILE *file;

if (filename == NULL)
return (0);

file = fopen(filename, "r");
if (file == NULL)
return (0);

buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
fclose(file);
return (0);
}

n = fread(buffer, sizeof(char), letters, file);
if (n == -1)
{
fclose(file);
free(buffer);
return (0);
}

buffer[n] = '\0';
printf("%s", buffer);

fclose(file);
free(buffer);

return (n);
}

