/* 
Подсчитать периметр прямоугольника по введенным с клавиатуры сторонам. 
Реализовать контроль ошибки ввода, вывод сообщения об ошибке и повторный ввод данных. 
Ошибка: нулевые и отрицательные значения.
*/

#include <stdio.h>
#define N

int main(){

    while(1){
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == 0 || b == 0) {
            printf("Error! One or both of values is zero!\n");
        } else if (a < 0 || b < 0) {
            printf("Error! One or both of values is less than zero!\n");
        } else {
            int p = (a + b) * 2;
            printf("Perimeter is %d\n", p);
            break;
        }
        }
}

