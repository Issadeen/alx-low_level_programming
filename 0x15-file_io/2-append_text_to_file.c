#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: Name of the file.
* @text_content: Text content to append.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, write_result, text_length = 0;

if (filename == NULL)
return (-1);

file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[text_length] != '\0')
text_length++;

write_result = write(file_descriptor, text_content, text_length);
if (write_result == -1)
{
close(file_descriptor);
return (-1);
}
}

close(file_descriptor);

return (1);
}

