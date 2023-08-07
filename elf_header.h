/* elf_header.h */
#ifndef ELF_HEADER_H
#define ELF_HEADER_H

#define ELF_MAGIC_NUMBER_SIZE 16

/**
 * struct ElfHeader - ELF header structure
 * @magic: ELF magic number
 * @class: ELF class
 * @data: ELF data encoding
 * @version: ELF version
 * @os_abi: ELF OS/ABI
 * @abi_version: ELF ABI version
 * @pad: Padding
 * @type: ELF type
 * @machine: ELF machine
 * @version2: ELF version 2
 * @entry: ELF entry point address
 */
typedef struct ElfHeader
{
	unsigned char magic[ELF_MAGIC_NUMBER_SIZE];
	unsigned char class;
	unsigned char data;
	unsigned char version;
	unsigned char os_abi;
	unsigned char abi_version;
	unsigned char pad[7];
	unsigned short type;
	unsigned short machine;
	unsigned int version2;
	unsigned long entry;
} ElfHeader;

#endif /* ELF_HEADER_H */

