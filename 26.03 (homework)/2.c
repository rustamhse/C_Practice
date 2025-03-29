#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define N 4
#define M 5

void avgNegPos(int** a, int a_N, int a_M, double* NegAvg, double* PosAvg){
    int sumNeg = 0;
    int sumPos = 0;
    int countNeg = 0;
    int countPos = 0;

    for (int i = 0; i < a_N / 2; i++){
        for (int j = 0; j < a_M; j++){
            if (a[i][j] < 0){
                sumNeg += a[i][j];
                countNeg += 1;
            }
            if (a[i][j] > 0){
                sumPos += a[i][j];
                countPos += 1;
            }
        }
    }

    if(countNeg > 0){
        *NegAvg = (double)sumNeg / countNeg;
    } else *NegAvg = 0.0;
    if(countPos > 0){
        *PosAvg = (double)sumPos / countPos;
    } else *PosAvg = 0.0;
}

int main(){

    double NegAvg_ = 0.0;
    double PosAvg_ = 0.0;
    double* pNegAvg_ = &NegAvg_;
    double* pPosAvg_ = &PosAvg_;

    srand(time(0));
    int** array = (int**)malloc(sizeof(int*)*N);
    for(int i = 0; i < N; i++) array[i] = (int*)malloc(sizeof(int)*M);
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            array[i][j] = rand()%21 - 10;
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    avgNegPos(array, N, M, pNegAvg_, pPosAvg_);
    printf("NegAvg >> %.2f, PosAVG >> %.2f", *pNegAvg_, *pPosAvg_);

    for(int i = 0; i < N; i++) {
        free(array[i]);
    }
    free(array);
}