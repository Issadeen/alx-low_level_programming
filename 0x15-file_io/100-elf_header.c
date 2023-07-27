/* 100-elf_header.c */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include "elf_header.h"

/**
* print_error - Print an error message to stderr and exit with status code 98.
* @message: The error message to print.
*/
void print_error(const char *message)
{
fprintf(stderr, "%s\n", message);
exit(98);
}

/**
* print_elf_class - Print the ELF class.
* @class: The ELF class.
*/
void print_elf_class(unsigned char class)
{
printf("  Class:                             ");
switch (class)
{
case 1:
printf("ELF32\n");
break;
case 2:
printf("ELF64\n");
break;
default:
printf("<unknown: %d>\n", class);
break;
}
}

/**
* print_elf_data - Print the ELF data encoding.
* @data: The ELF data encoding.
*/
void print_elf_data(unsigned char data)
{
printf("  Data:                              ");
switch (data)
{
case 1:
printf("2's complement, little endian\n");
break;
case 2:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %d>\n", data);
break;
}
}

/**
* print_elf_osabi - Print the ELF OS/ABI.
* @os_abi: The ELF OS/ABI.
*/
void print_elf_osabi(unsigned char os_abi)
{
printf("  OS/ABI:                            ");
switch (os_abi)
{
case 0:
printf("UNIX - System V\n");
break;
default:
printf("<unknown: %d>\n", os_abi);
break;
}
}

/**
* print_elf_type - Print the ELF type.
* @type: The ELF type.
*/
void print_elf_type(unsigned short type)
{
printf("  Type:                              ");
switch (type)
{
case 1:
printf("REL (Relocatable file)\n");
break;
case 2:
printf("EXEC (Executable file)\n");
break;
case 3:
printf("DYN (Shared object file)\n");
break;
default:
printf("<unknown: %d>\n", type);
break;
}
}

/**
* print_elf_header - Print the information contained in the ELF header.
* @header: A pointer to the ELF header structure.
*/
void print_elf_header(const ElfHeader *header)
{
int i;

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < ELF_MAGIC_NUMBER_SIZE; i++)
printf("%02x ", header->magic[i]);
printf("\n");

print_elf_class(header->class);
print_elf_data(header->data);

printf("  Version:                           %d (current)\n", header->version);

print_elf_osabi(header->os_abi);

printf("  ABI Version:                       %d\n", header->abi_version);

print_elf_type(header->type);

printf("  Entry point address:               0x%lx\n", header->entry);
}

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array of pointers to the command-line arguments.
*
* Return: 0 on success, 98 on error.
*/
int main(int argc, char *argv[])
{
int fd;
ssize_t bytes_read;
unsigned char elf_magic[] = {0x7f, 'E', 'L', 'F'};
ElfHeader header;

if (argc != 2)
print_error("Usage: elf_header elf_filename");

fd = open(argv[1], O_RDONLY);
if (fd == -1)
print_error("Error opening the file");

bytes_read = read(fd, &header, sizeof(header));
if (bytes_read != sizeof(header))
print_error("Error reading the ELF header");

if (memcmp(header.magic, elf_magic, sizeof(elf_magic)) != 0)
print_error("Not an ELF file");

print_elf_header(&header);

close(fd);
return (0);
}

