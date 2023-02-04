#include "task1_2.hpp"

int selectSort(int *arr, int n, int m){
    int t, i, j, pos;
    for (i = 0; i < n; ++i){
        pos = i;
        t = arr[i];
        for (j = i + 1; j < m; ++j){
            if (arr[j] < t){
                pos = j;
                t = arr[j];
            }
        }
        arr[pos] = arr[i];
        arr[i] = t;
    }
}
int test_task1_2(int* arr, int n, int m){
        selectSort(arr, n, m);
        for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                        cout << arr[i][j] << " ";
                }
        }
}
