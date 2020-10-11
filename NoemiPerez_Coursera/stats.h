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
 * @file stats.h
 * @brief Header file for the statistical analysis functions
 *
 * File that documents all the functions included in stats.c
 *
 * @author Noemi Perez
 * @date October 10th, 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print statistics of a dataset
 *
 * Function that prints the statistics of an array including 
 * minimum, maximum, mean, and median.
 *
 * @param * numbers: Pointer to a dataset
 * @param int count: Array data length
 *
 * @return no return
 */

void print_statistics(unsigned char * numbers, int count);

/**
 * @brief Print array on console
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param * numbers: Pointer to a dataset
 * @param int count: Array data length
 *
 * @return no return
 */

void print_array(unsigned char * numbers, int count);

/**
 * @brief Calculate median
 *
 * Given an array of data and a length, returns the median value.
 *
 * @param * numbers: Pointer to a dataset
 * @param int count: Array data length
 *
 * @return median value of the numbers in the given array
 */

unsigned char find_median(unsigned char * numbers, int count);

/**
 * @brief Calculate mean
 *
 * Given an array of data and a length, returns the mean value.
 *
 * @param * numbers: Pointer to a dataset
 * @param int count: Array data length
 *
 * @return average value of the numbers in the given array.
 */

unsigned char find_mean(unsigned char * numbers, int count);


/**
 * @brief Find maximum value
 *
 * Given an array of data and a length, returns the maximum value. 
 *
 * @param * numbers: Pointer to a dataset
 * @param int count: Array data length
 *
 * @return maximum number in the given array.
 */

unsigned char find_maximum(unsigned char * numbers, int count);


/**
 * @brief Find minimum value
 *
 * Given an array of data and a length, returns the minimum value.
 *
 * @param * numbers: Pointer to a dataset
 * @param int count: Array data length
 *
 * @return minimum number in the given array.
 */

unsigned char find_minimum(unsigned char * numbers, int count);



/**
 * @brief Sort an array from largest to smallest.
 *
 * Given an array of data and a length, sorts the array from largest to smallest. 
 * The zeroth element is the largest value and the last element (n-1) is the smallest value.
 * 
 * @param * numbers: Pointer to a dataset
 * @param int count: Array data length
 *
 * @return no return
 */

void sort_array(unsigned char * numbers, int count);

#endif /* __STATS_H__ */
