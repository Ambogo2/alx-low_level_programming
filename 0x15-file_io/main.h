#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
void close_and_exit(int fd);
char *allocate_buffer(char *file);
int append_text_to_file(const char *filename, char *text_content);


#endif
