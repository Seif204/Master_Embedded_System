/*
 * Platform_Types.h
 *
 *  Created on: ١٩‏/٠٦‏/٢٠٢٤
 *      Author: Seif
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_


#include <stdint.h>
// stdint.h lib
typedef signed char			int8_t;
typedef unsigned char 		uint8_t;
typedef signed short		int16_t;
typedef unsigned short		uint16_t;
typedef signed int			int32_t;
typedef unsigned int 		uint32_t;
typedef signed long long 	int64_t;
typedef unsigned long long 	uint64_t;


typedef int8_t    sint8;
typedef uint_t    uint8;
typedef char      char_t;
typedef int16_t   sint16;
typedef uint16_t  uint16;
typedef int32_t   sint32;
typedef uint32_t  uint32;
typedef int64_t   sint64;
typedef uint64_t  uint64;


typedef volatile int8_t    vsint8;
typedef volatile uint_t    vuint8;
typedef volatile char      vchar_t;
typedef volatile int16_t   vsint16;
typedef volatile uint16_t  vuint16;
typedef volatile int32_t   vsint32;
typedef volatile uint32_t  vuint32;
typedef volatile int64_t   vsint64;
typedef volatile uint64_t  vuint64;


#endif /* PLATFORM_TYPES_H_ */
