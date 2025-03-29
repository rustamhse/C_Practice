/*
Вводить различные символы до тех пор, пока не введен 'e'. 
При вводе символа '{' или '}' выводить сообщение 'фигурная скобка', при вводе '[' или']' - "квадратная скобка"; 
при вводе '(' или ')' - "круглая скобка", в остальных случаях - сообщение "не скобка". 
Для решения задачи можно использовать таблицу кодов ASCII (пример (https://www.geeksforgeeks.org/cpp-program-to-print-ascii-value-of-a-character/) 
работы с таблицей ascii, сама таблица) 
(https://blog.skillfactory.ru/wp-content/uploads/2023/02/ascii_table-nocolor.svg-1541742.png)
*/

#include <stdio.h>

int main(){
    char buffer;
    while(1){
        scanf("%c", &buffer);
        if (buffer == 'e') break;
        else if (buffer == '{' || buffer == '}') printf("Фигурная скобка\n");
        else if (buffer == '[' || buffer == ']') printf("Квадратная скобка\n");
        else if (buffer == '(' || buffer == ')') printf("Круглая скобка\n");
        else if ((int)buffer == 10);
    }
}