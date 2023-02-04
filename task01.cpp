#include "task01.hpp"

void fillRandom(int* firstElementArr, int size) {
        srand(time(nullptr));
        for (int i = 0; i < size; i++) {
                *(firstElementArr + i) = random() % 200;
        }
}

int test_task01(int* arr, int size){
       fillRandom(&arr[0], size);
       for(int i = 0; i < size; i++){
               std::cout << i+1 << " " << arr[i] << std::endl;
       }
}
