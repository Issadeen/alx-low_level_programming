#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
* @filename: The name of the file to read
* @letters: The number of letters to read and print
*
* Return: The actual number of letters read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
return (0);

FILE *file;
file = fopen(filename, "r");
if (file == NULL)
return (0);

char *buffer;
buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
fclose(file);
return (0);
}

ssize_t bytes_read;
bytes_read = fread(buffer, sizeof(char), letters, file);
if (bytes_read < 0)
{
free(buffer);
fclose(file);
return (0);
}

ssize_t bytes_written;
bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
if (bytes_written < bytes_read)
{
free(buffer);
fclose(file);
return (0);
}

free(buffer);
fclose(file);

return (bytes_written);
}

