#include <stdio.h>
#include <stdbool.h>

int search(int *arr, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

bool areDifferent(int *arr1, int n, int *arr2, int n2) {
    for (int i = 0; i < n; i++) {
        if (search(arr2, n2, arr1[i]) != -1) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    //printf("%i\n", search(arr,n,3));
    int arr2[] = {7,8,9};
    int n2 = sizeof(arr2)/sizeof(int);
    printf("%i\n", areDifferent(arr,n,arr2,n2));
}