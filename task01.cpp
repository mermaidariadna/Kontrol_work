#include "task01.hpp"

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


int test_task01(int* arr, int size){
       fillRandom(&arr[0], size);
       for(int i = 0; i < size; i++){
               std::cout << i+1 << " " << arr[i] << std::endl;
       }
}
