/* Дана целочисленная матрица 10х12. Найти сумму элементов в заштрихованной области (верхняя левая и нижняя правая четверти).
Сформировать одномерный массив, содержащий максимальные элементы четных столбцов.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define M 12
#define COUNT_OF_EVEN_COLUMNS (M / 2)

int main(){
    int matrix[N][M];
    int maxArr[COUNT_OF_EVEN_COLUMNS];
    int counter = 0;
    int sum = 0;
    srand(time(0));

    for(int i = 0; i < COUNT_OF_EVEN_COLUMNS; i++) maxArr[i] = 0;

    for(int i = 0; i < N; i++){
        printf("\n");
        for(int j = 0; j < M; j++){
            matrix[i][j] = rand() % 10;
            printf("%d ", matrix[i][j]);
            
            if((i < 5 && j < 6) || (i >= 5 && j >= 6)){
                sum += matrix[i][j];
            }
        }
    }

    printf("\n");


    for(int j = 0; j < M; j++){
        maxArr[counter] = matrix[0][j];
        for(int i = 0; i < N; i++){
            if((j + 1) % 2 == 0 && matrix[i][j] > maxArr[counter]){
                maxArr[counter] = matrix[i][j];
            }
        }
        if(j % 2 == 0 && j != 0) counter++;
    }

    printf("\n");

    printf("Сумма элементов в заштрихованной области (верхняя левая и нижняя правая четверти) %d\n", sum);
    printf("Одномерный массив, содержащий максимальные элементы четных столбцов:\n");
    for(int i = 0; i < COUNT_OF_EVEN_COLUMNS; i++) printf("%d ", maxArr[i]);
    printf("\n");
}