/* Ввести с клавиатуры 10 целых положительных чисел, подсчитать количество нулей. Отрицательные числа игнорировать и сообщать об ошибке ввода. 
*/

#include <stdio.h>
#define N 10

int main(){
    int a[N];
    int temp;
    int i = 0;
    int countOfZeros = 0;

    while(i < N){
        scanf("%d", &temp);
        if(temp < 0){
            printf("Error! You entered a number less than zero. Enter again!\n");
        } else if (temp >= 0) {
            a[i] = temp;
            if (temp == 0) countOfZeros++;
            i++;
        }
    }

    printf("Count of zeros is %d", countOfZeros);
}