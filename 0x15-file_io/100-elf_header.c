#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define ERROR 98

/**
* print_elf_header - Prints the information contained in the ELF header
* @header: Pointer to the ELF header structure
*/
void print_elf_header(Elf64_Ehdr *header);

/**
* main - Entry point of the program
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
* Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
*/
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (EXIT_FAILURE);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
perror("Error opening file");
return (EXIT_FAILURE);
}

if (read(fd, &header, sizeof(header)) != sizeof(header))
{
fprintf(stderr, "Error reading ELF header\n");
return (EXIT_FAILURE);
}

print_elf_header(&header);

close(fd);

return (EXIT_SUCCESS);
}

/**
* print_elf_header - Prints the information contained in the ELF header
* @header: Pointer to the ELF header structure
*/
void print_elf_header(Elf64_Ehdr *header)
{
int i;

printf("ELF Header:\n");

printf("  Magic: ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");

printf("  Class: ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
}

printf("  Data: ");
switch (header->e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
}

printf("  Version: %d (current)\n", header->e_ident[EI_VERSION]);

printf("  OS/ABI: ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
}

printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

printf("  Type: ");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", header->e_type);
}

printf("  Machine: %x\n", header->e_machine);

printf("  Version: %x\n", header->e_version);

printf("  Entry point address: 0x%lx\n", header->e_entry);
}

