#include <stdio.h>
#include <stdbool.h>

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// 0(N^2)
void selection_sort(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i)
            swap(&arr[i], &arr[min_idx]);
    }
}

// 0(N^2), if optimized bubble sort 0(N)
void bubble_sort(int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void optimized_bubble_sort(int* arr, int n) {
    for (int i = 0; i < n-1; i++) {
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false) break;
    }
}

// 0(N^2)
void insertion_sort(int* arr, int n) {
    int i, key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printArr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[] = {45,20,67,13,27,63};
    int n = sizeof(arr)/sizeof(int);
    //selection_sort(arr,n);
    //bubble_sort(arr,n);
    //optimized_bubble_sort(arr,n);
    insertion_sort(arr,n);
    printArr(arr,n);
}