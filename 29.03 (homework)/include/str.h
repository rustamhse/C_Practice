#ifndef STR_H
#define STR_H

#include <stdlib.h>

char *my_strcpy(char* destptr, const char * srcptr);
char *my_strcat(char* destptr, const char * srcptr);
int my_strcmp(const char* string1, const char * string2);
size_t my_strlen(const char * string);

#endif // STR_H