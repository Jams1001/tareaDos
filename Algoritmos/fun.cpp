#include "headerSort.hpp"

void bubbleSort(int arr[], int n){
  int temp = 0;
  for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n - i - 1; j++){
      if(arr[j] > arr[j + 1]){
        temp   = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void selectionSort(int arr[], int n){
  int index_menor = 0;
  int temp = 0;
  for (int i = 0; i < n - 1; i++){
    index_menor = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[index_menor]) {
        index_menor = j;
      } 
    }
    temp   = arr[i];
    arr[i] = arr[index_menor];
    arr[index_menor] = temp;
  }
}

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
      while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j = j - 1;
      }
      arr[j + 1] = key;
  }
}



void quickSort(int arr[], int low, int high) {
    if (low >= high) {
        return;
    }

    int indicePivote = low + (high - low) / 2;
    int valorPivote = arr[indicePivote];

    int i = low;
    int j = high;

    while (i <= j) {
        while (arr[i] < valorPivote) {
            i++;
        }
        while (arr[j] > valorPivote) {
            j--;
        }
        if (i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (low < j) {
        quickSort(arr, low, j);
    }
    if (i < high) {
        quickSort(arr, i, high);
    }
}
