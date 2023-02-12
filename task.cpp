#include "task.hpp"

void swap(int a, int b){
	int temp = a;
        a = b;
	b = temp;
}	

void fillRandom(int* arr, int size, int min, int max){
	srand(time(nullptr));
	for(int i = 0; i < size; i++){
		arr[i] = rand() % (max - min + 1) + min;
	}
}

int showEl(const int* arr, int size, int N, int M){
	static int st = 0;
	int ind = 0;
	if(st >= M){
		return 0;
	}
	for(int i = 0; i < M; i++){
		std::cout << arr[ind] << " ";
		ind++;
	}
	st++;
	std::cout << std::endl;
	showEl(arr, size, N, M);
	st = 0;
	return 0;
}

int showEl2(const int* arr, int size, int N, int M){
        static int st = 0;
        int ind = 0;
        if(st >= M){
        	
		return 0;
        }
        for(int i = 0; i < M; i++){
                std::cout << arr[ind] << " ";
                ind++;
        }
        st++;
        std::cout << std::endl;
        showEl2(arr, size, N, M);
	st = 0;

        return 0;
}

void selectionSort(int *ar, int size){
        for(int i = 0; i < size; i++){
                swap(ar[i], ar[search(ar, size, i)]);
        }
}


int search(int *ar, int size, int i){
        int min = ar[i];
        int index = 0;
        for(int j = i; j < size; j++){
                  if(ar[j] <= min){
                          min = ar[j];
                          index = j;
                  }
        }
        return index;
}

//эти рекурсии бесконечные... потому что size нигде не меняется... раз он не меняется, то и условие выхода никогда не сработает...
int getMax(const int* arr, int size){
        int left = 0;
        int right = size - 1;
        if(right == left){
                std::cout << "max = " << arr[left] << std::endl;
                return 0;
        }
        if(arr[left] <= arr[right]){
                left++;
        }
        else if(arr[left] > arr[right]){
                right--;
        }
        getMax(arr, size);
        return 0;
}

int getMin(const int* arr, int size){
        int left = 0;
        int right = size - 1;
        if (right == left && size == 1){
                std::cout << "min = " << arr[left] << std::endl;	//это плохо... надо вернуть из функции значение минимального элемента...
                return ar[left];;
        }
        if(arr[left] <= arr[right]){
                right--;	//ну ты поменяла значение??? а в след раз значение right будет другим...
//		здесь надо вызывать функцию getMin
		return 	getMin(&arr[1], size-1);	//к примеру так....
        }
        else if(arr[left] > arr[right]){
                left++;
		return getMin(&arr[0], size-1);	//и здесь к примеру так....
        }
//        getMax(arr, size);	//вот здесь твой косяк....... делаю вывод, что эта функция писалась методом копирования и вставки....
}

void fillRandom100(int* arr, int size){
	srand(time(nullptr));
        for(int i = 0; i < size; i++){
                arr[i] = rand() % 100;
        }
}

void showArray(int* arr, int size){
       	for(int i = 0; i < size; i++){
                std::cout << i << '\t' << arr[i] << std::endl;
        } 
}

void showArray(const int* ar, int size, int colCount) {
	for (int i = 0; i < size; i++) {
		if (!(i % colCount) && i > 0) {
			std::cout << std::endl;
		}
		std::cout << ar[i] << " ";
	}
	std::cout << std::endl;
}
