#include <iostream>
#include "task1_1.hpp"

void fillRandom(int *ar, int size, int min, int max){
        srand(time(nullptr));
        for (int i = 0; i < size; i++){
                int num = rand()%1000;
                if (num <= max && num >= min){
                        ar[i] = num;
                }
                else{
                        i = i - 1;
                }
        }
}
int showEl(const int* ar, int size, int N = 10, int M = 10) {
        for(int i = 0; i < N; i++){
                for(int j = 0; j < M; j++){
                        fillRandom(ar[0][0], size);
                }
        }
}

int test_task1_1(const int* ar, int size, int N = 10, int M = 10){
        showEl(ar, size, N, M);
}
