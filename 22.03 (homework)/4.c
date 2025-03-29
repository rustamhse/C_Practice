/* Ввести с клавиатуры целое трехзначное число. Найти сумму цифр введенного числа. */

#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    int a_1 = a % 10;
    int a_2 = a / 10 % 10;
    int a_3 = a / 100;
    int res = a_1 + a_2 + a_3;

    printf("%d\n", res);
}