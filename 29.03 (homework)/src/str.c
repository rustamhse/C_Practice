#include "str.h"

char *my_strcpy(char* destptr, const char * srcptr){
    size_t i = 0;
    while (srcptr[i] != '\0'){
        destptr[i] = srcptr[i];
        i++;
    }
    destptr[i] = '\0';
    return destptr;
}

char *my_strcat(char* destptr, const char * srcptr){
    size_t i = 0;
    while(destptr[i] != '\0'){
        i++;
    }
    size_t j = 0;
    while(srcptr[j] != '\0'){
        destptr[i] = srcptr[j];
        i++;
        j++;
    }
    destptr[i] = '\0';
    return destptr;
}

int my_strcmp(const char* s1, const char* s2) {
    while (*s1 && *s2 && (*s1 == *s2)) {
      s1++;
      s2++;
    }
  
    int res = (*(unsigned char*)s1) - (*(unsigned char*)s2);
  
    if (res >= 1) {
      return 1;
    }
    else if (res < 0) {
      return -1;
    }
    else {
      return 0;
    }
}

size_t my_strlen(const char * string){
    size_t size = 0;
    while(*string != '\0'){
        size++;
        string++;
    }
    return size;
}