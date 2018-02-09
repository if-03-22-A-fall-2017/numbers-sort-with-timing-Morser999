/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include "sorting_algorithms.h"

void bubble_sort(int* array,int len){
  for (int i = 0; i < len-1; i++){
      for (int j = 0; j < len-i-1; j++){
          if (array[j] > array[j+1]){
            int swap = array[j];
            array[j] = array[j + 1];
            array[j + 1] = swap;
          }
    }
  }
}
void insertion_sort(int*array,int len){
   int key;
   int j;
   for (int i = 1; i < len; i++)
   {
       key = array[i];
       j = i-1;
       while (j >= 0 && array[j] > key)
       {
           array[j+1] = array[j];
           j = j-1;
       }
       array[j+1] = key;
   }
}
int* init_random(int* array,int len){
    for (int i = 0; i < len; i++) {
      array[i] = rand() % 1025;
    }
    return array;
}
