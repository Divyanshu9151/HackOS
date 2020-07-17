#ifndef STDINT_H
#define STDINT_H

#include <stdint.h>
#include <stddef.h>

#define low_16(address) (uint16_t)((address) & 0xFFFF)
#define high_16(address) (uint16_t)(((address) >> 16) & 0xFFFF)

/*typedef unsigned char        uint8_t;
typedef          char         int8_t;
typedef unsigned short      uint16_t;
typedef          short       int16_t;
typedef unsigned int        uint32_t;
typedef          int         int32_t;
typedef unsigned long long  uint64_t;
typedef          long long   int64_t;

typedef unsigned long        size_t;*/

#endif