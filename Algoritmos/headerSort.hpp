/**
MIT License

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Permission is hereby granted, free of charge, to any person obtaining a copy of this
software and associated documentation files (the "Software"), to deal in the Software
without restriction, including without limitation the rights to use, copy, modify, merge,
publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons
to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

/**
 * @file headerSort.hpp
 * @author Jorge Mora (jorgeadan.mora@ucr.ac.cr)
 * @brief This code creates different headerSorts for sorting algorithms
 * @version 0.1
 * @date 2023-30-04
 * 
 * @code {.cpp}
  int main() {
    bubbleSort(arreglito, SIZE_ARRAY);
    selectionSort(arreglito, SIZE_ARRAY);
    insertionSort(arreglito, SIZE_ARRAY);
    quickSort(arreglito, 0, SIZE_ARRAY-1);
  return 0;
  }
 * @endcode
 * 
 * 
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef HEADER_SORT_HPP
#define HEADER_SORT_HPP
#include <vector>
#include <iostream>
using namespace std;

/**
 * @brief Sorts an array of integers using the Bubble Sort algorithm
 * 
 * @param arr Array of integers to be sorted
 * @param n Length of the array
 */
void bubbleSort(int arr[], int n);

/**
 * @brief Sorts an array of integers using the Selection Sort algorithm
 * 
 * @param arr Array of integers to be sorted
 * @param n Length of the array
 */
void selectionSort(int arr[], int n);

/**
 * @brief Sorts an array of integers using the Insertion Sort algorithm
 * 
 * @param arr Array of integers to be sorted
 * @param n Length of the array
 */
void insertionSort(int arr[], int n);

/**
 * @brief Sorts an array of integers using the Quick Sort algorithm
 * 
 * @param arr Array of integers to be sorted
 * @param low Lower index of the array segment to be sorted
 * @param high Upper index of the array segment to be sorted
 */
void quickSort(int arr[], int low, int high);

#endif //HEADER_SORT_HPP
