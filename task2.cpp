#include "task2.hpp"

int getMax(const int *ar, int size){
        static int left = 0;
        static int right = size - 1;
        if(right == left){
                std::cout << "max = " << ar[left] << std::endl;
                return 0;
        }
        if(ar[left] <= ar[right]){
                left++;
        }
        else if(ar[left] > ar[right]){
                right--;
        }
        getMax(ar, size);
        return 0;
}
int getMin(const int *ar, int size){
        static int left = 0;
        static int right = size -1;

        if(right == left){
                std::cout << "min = " << ar[left] << std::endl;
                return 0;
        }
        if(ar[left] <= ar[right]){
                right--;
        }
        else if(ar[left] > ar[right]){
                left++;
        }
        getMin(ar,size);
        return 0;
}
~   
