#include "headerSort.hpp"
#include <set>
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

#define SIZE_ARRAY 15

int main() {
  int arreglito[SIZE_ARRAY] = {};
  srand(time(NULL));

  for(int i = 0; i < SIZE_ARRAY; i++) { 
    arreglito[i] = rand() % 10000; 
  }

  cout << "Arreglo original:\t";
  for(int i = 0; i < SIZE_ARRAY; i++) { 
    cout << arreglito[i] << " "; 
  }
  cout << endl;

  bubbleSort(arreglito, SIZE_ARRAY);
  cout << "Bubble Sort:\t\t"; 
  for(int i = 0; i < SIZE_ARRAY; i++) { 
    cout << arreglito[i] << " "; 
  }
  cout << endl;

  selectionSort(arreglito, SIZE_ARRAY);
  cout << "Selection Sort:\t\t"; 
  for(int i = 0; i < SIZE_ARRAY; i++) { 
    cout << arreglito[i] << " "; 
  }
  cout << endl;

  insertionSort(arreglito, SIZE_ARRAY);
  cout << "Insertion Sort:\t\t"; 
  for(int i = 0; i < SIZE_ARRAY; i++) { 
    cout << arreglito[i] << " "; 
  }
  cout << endl;

  quickSort(arreglito, 0, SIZE_ARRAY-1);
  cout << "QuickSort:\t\t"; 
  for(int i = 0; i < SIZE_ARRAY; i++) { 
    cout << arreglito[i] << " "; 
  }
  cout << endl;

  return 0;
}