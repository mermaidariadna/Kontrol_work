#include <iostream>
#include <time.h>
#include "task01.hpp"
#include "task1_1.hpp"
#include "task1_2.hpp"
int main(){
        int arr[100], n = 10, N = 10, M = 10;
        fillRandom(arr, 100, 0, 200);
        for(int i = 0; i < n; i++){
                std::cout << i + 1 << " " << arr[i] << std::endl;
        }       //test_task01(arr, n);
        showEl(arr, n, N, M);
        selectSortShow(arr, N, M);
        test_task1_2(arr,N , M);
}

