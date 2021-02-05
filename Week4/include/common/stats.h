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
 * @file Week1_Programming_Assignment_stats.h
 * @brief A simple application That Perform statistical analytics on data set
 *
 * Analyzing an array of unsigned char data items and report analytics on the 
 * Maximum, Minimum, Mean, and median of the data set Rounded down to the 
 * nearest interger.
 * After analysis and sorting is doen, data will be printed on the screen in 
 * nicely formatted presentation.
 *
 * EitanHalfon
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(unsigned char* array, unsigned char length);
/**
 * @brief Print unsigned Char
 *
 * Function to print Median, Mean, Max, Mini
 *
 * @param int Value  
 *  
 * @return None
 */
#ifdef VERBOSE
void print_array(unsigned char* array, unsigned char length);
#endif
/**
 * @brief Print array of char
 *
 * Function to print an array of char
 *
 * @param Pointer to an array 
 * @param int size of array 
 *  
 * @return None
 */

unsigned char find_median(unsigned char* array, unsigned char length);
/**
 * @brief Find the Median 
 *
 * Function to find the Median 
 *
 * @param Pointer to an array 
 * @param int size of array 
 *  
 * @return Median value
 */

unsigned char find_mean(unsigned char* array, unsigned char length);
/**
 * @brief Find the Mean
 *
 * Function to find the Mean 
 *
 * @param Pointer to an array 
 * @param int size of array 
 *  
 * @return Mean value
 */

unsigned char find_maximum(unsigned char* array, unsigned char length);
/**
 * @brief Find the Maximum
 *
 * Function to find the Maximum 
 *
 * @param Pointer to an array 
 * @param int size of array 
 *  
 * @return Maximum value
 */

unsigned char find_minimum(unsigned char* array, unsigned char length);
/**
 * @brief Find the minimum
 *
 * Function to find the minimum 
 *
 * @param Pointer to an array 
 * @param int size of array 
 *  
 * @return minimum value
 */

void sort_array(unsigned char* array, unsigned char length);
/**
 * @brief Sort an array descendingly
 *
 * Given an array of data and length, Sort the array from largest to smalles
 *
 * @param Pionter to an array 
 * @param int size of array 
 *  
 * @return None
 */


#endif /* __STATS_H__ */
