/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Statistical analysis functions
 *
 * This file contains all the functions to perform statistical analysis on a given dataset
 * as well as the funtions to display and format the results.
 *
 * @author Noemi Perez
 * @date October 10th, 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  printf("Original array: \n");
  print_array(test, SIZE);
  printf("---------------------------------------------------------- \n");
  printf("Statistics: \n");
  print_statistics(test, SIZE);
  printf("---------------------------------------------------------- \n");
  

}

void print_statistics(unsigned char * numbers, int count){
  unsigned char median_val=find_median(numbers,count);
  unsigned char mean_val=find_mean(numbers,count);
  unsigned char max_val=find_maximum(numbers,count);
  unsigned char min_val=find_minimum(numbers,count);
  printf("Median value: %d \n", median_val);
  printf("Mean value: %d \n", mean_val);
  printf("Maximum value: %d \n", max_val);
  printf("Minimum value: %d \n", min_val);
  printf("Sorted array: \n");
  print_array(numbers, SIZE);

}

void print_array(unsigned char * numbers, int count){
  int i;
  printf("%d",numbers[0]);  
  for (i = 1; i < count; i++) {
    printf(", %d",numbers[i]);  
  }
  printf("\n");

}

unsigned char find_median(unsigned char * numbers, int count){
  unsigned char median_val;
  sort_array(numbers, SIZE);
  if (count%2==0){
    median_val=(numbers[count/2-1]+numbers[count/2])/2;
  }
  else{
    median_val=numbers[count/2];
  }
  return median_val;
}

unsigned char find_mean(unsigned char * numbers, int count){
  int sum=0,i,mean;
  for (i = 0; i < count; i++){
    sum+=numbers[i];
  }
  mean=sum/count;

  return mean;
 
}

unsigned char find_maximum(unsigned char * numbers, int count){
  int i;
  unsigned char max_value= numbers[0];
  for (i=1; i<count; i++){
    if (numbers[i] > max_value){
      max_value=numbers[i];
    }
  }
  
  return max_value;
  //return numbers[0];
}

unsigned char find_minimum(unsigned char * numbers, int count){
  
  int i;
  unsigned char min_value= numbers[0];
  for (i=1; i<count; i++){
    if (numbers[i] < min_value){
      min_value=numbers[i];
    }
  }
  
  return min_value;

  //return numbers[count-1];
}

void sort_array(unsigned char * numbers, int count){
    int temp = 0, j, i;

    for (i = 1; i < count; i++) {
        for (j = 0; j < count - i; j++) {
            if (numbers[j] < numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
  
}