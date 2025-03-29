/* В массиве Х(N) найти сумму элементов, расположенных после 
максимального элемента. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(){
    int a[N];
    int sum = 0;

    // Генерируем рандомные элементы массива
    srand(time(0));
    for (int i = 0; i < N; i++){
        a[i] = rand() % 10;
        printf("%d ", a[i]);
    }
    printf("\n");
    
    // Ищем максимум и его индекс
    int max = a[0];
    int max_index = 0;
    for (int i = 0; i < N; i++){
        if (a[i] > max) {
            max = a[i];
            max_index = i;
        }
    }

    // Начиная после элемента с индексом максимума суммируем
    for (int i = max_index + 1; i < N; i++){
        sum += a[i];
    }

    printf("Сумма равна %d\n", sum);
}