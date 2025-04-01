#include "test_str.h"
#include "str.h"
#include <stdio.h>
#include <assert.h>

void test_my_strcmp(){
    const char my_string[] = "Hello";
    char new_string[] = "New string";

    assert(my_strcmp(my_string, new_string) == -1);
}

void test_my_strcat(){
    const char my_string[] = "Hello";

    char another_string[100] = "Test";
    my_strcat(another_string, my_string);

    assert(my_strcmp(another_string, "TestHello") == 0);
}

void test_my_strcpy(){
    const char my_string[] = "Hello";
    char new_string[] = "New string";

    my_strcpy(new_string, my_string);

    assert(my_strcmp(new_string, "Hello") == 0);
}

void test_my_strlen(){
    const char my_string[] = "Hello";
    assert(my_strlen(my_string) == 5);
}