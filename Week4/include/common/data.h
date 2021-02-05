/**
 * EitanHalfon
 */

#ifndef __DATA_H__
#define __DATA_H__

/**
 * Brief Convert std Int into ASCII string
 *
 * String is NULL terminated.
 *
 * Param data Data to be converted
 * Param ptr Pointer to converted string
 * Param base Base 2-16 supported
 *
 * Return Length of converted data including NULL terminator
 */
unsigned char my_itoa(int data, unsigned char* ptr, unsigned int base);

/**
 * Brief Convert std ASCII into Int string
 *
 * String is NULL terminated.
 *
 * Param data Data to be converted
 * Param ptr Pointer to converted string
 * Param base Base 2-16 supported
 *
 * Return Length of converted data including NULL terminator
 */
int my_atoi(unsigned char* ptr, unsigned char digits, unsigned int base);

#endif
