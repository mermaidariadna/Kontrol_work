#include <iostream>
#include <time.h>

void fillRandom(int* firstElementArr, int size) {
        srand(time(nullptr));
        for (int i = 0; i < size; i++) {
                *(firstElementArr + i) = random() % 200;
        }
}

int main(){
        int size = 100;
        int arr[100];
        fillRandom(&arr[0], size);
        for(int i = 0; i < size; i++){
                std::cout << arr[i] << " ";
        }
        return 0;
}
