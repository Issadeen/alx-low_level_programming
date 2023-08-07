#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
* copy_file - Copies the content of the source file to the destination file.
* @file_from: Source file descriptor.
* @file_to: Destination file descriptor.
*
* Return: 1 on success, -1 on failure.
*/
int copy_file(int file_from, int file_to)
{
char buffer[BUFFER_SIZE];
ssize_t read_result, write_result;

while ((read_result = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
write_result = write(file_to, buffer, read_result);
if (write_result == -1)
return (-1);
}

if (read_result == -1)
return (-1);

return (1);
}

/**
* close_file - Closes the file descriptor.
* @fd: File descriptor to close.
*
* Return: 0 on success, -1 on failure.
*/
int close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
return (-1);
}

return (0);
}

/**
* main - Copies the content of a file to another file.
* @argc: Number of command-line arguments.
* @argv: Array of command-line arguments.
*
* Return: 0 on success, or exit with a specific error code on failure.
*/
int main(int argc, char *argv[])
{
int file_from, file_to;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

if (copy_file(file_from, file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

if (close_file(file_from) == -1 || close_file(file_to) == -1)
exit(100);

return (0);
}

