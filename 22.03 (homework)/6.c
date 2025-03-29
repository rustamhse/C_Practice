/* В массиве Х(N) найти количество элементов, расположенных между максимальным и минимальным элементами. (либо наоборот) */

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
    
    // Ищем максимум, минимум и их индексы
    int max = a[0];
    int min = a[0];
    int max_index = 0;
    int min_index = 0;
    for (int i = 0; i < N; i++){
        if (a[i] > max) {
            max = a[i];
            max_index = i;
        }
        if (a[i] < min) {
            min = a[i];
            min_index = i;
        }
    }

    // Начиная после элемента с индексом максимума и до индекса минимума (или наоборот) суммируем
    if (max_index > min_index){
        for (int i = min_index + 1; i < max_index; i++){
            sum += a[i];
        }
    } else if (max_index < min_index){
        for (int i = max_index + 1; i < min_index; i++){
            sum += a[i];
        }
    }
   

    printf("Сумма равна %d\n", sum);
}