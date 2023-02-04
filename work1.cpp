#include <iostream>
#include <time.h>
#include "task01.hpp"
int main(){
        int arr[100], n = 10;
        fillRandom(&arr[0], n);
        for(int i = 0; i < n; i++){
                std::cout << i + 1 << " " << arr[i] << std::endl;
        }       //test_task01(arr, n);  
}
