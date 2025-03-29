/* Дана целочисленная матрица 6х9. Найти сумму элементов в заштрихованной области (нижняя половина).
Сформировать одномерный массив, содержащий количество нулевых элементов четных столбцов.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6
#define M 9
#define COUNT_OF_EVEN_COLUMNS (M / 2)

int main(){
    int matrix[N][M];
    int even[COUNT_OF_EVEN_COLUMNS];
    int counter = 0;
    int sum = 0;
    srand(time(0));

    for(int i = 0; i < COUNT_OF_EVEN_COLUMNS; i++) even[i] = 0;

    for(int i = 0; i < N; i++){
        printf("\n");
        for(int j = 0; j < M; j++){
            matrix[i][j] = rand() % 2;
            printf("%d ", matrix[i][j]);
            if(i >= 3){
                sum += matrix[i][j];
            }
        }
    }

    printf("\n");

    for(int j = 0; j < M; j++){
        for(int i = 0; i < N; i++){
            if((j + 1) % 2 == 0 && matrix[i][j] == 0){
                even[counter]++;
            }
        }
        if(j % 2 == 0 && j != 0)
        counter++;
    }

    printf("\n");

    printf("Сумма элементов нижней половины равна %d\n", sum);
    printf("Одномерный массив, содержащий количество нулевых элементов четных столбцов:\n");
    for(int i = 0; i < COUNT_OF_EVEN_COLUMNS; i++) printf("%d ", even[i]);
    printf("\n");
}