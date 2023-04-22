#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    uint16_t value = *reg;
    uint16_t bit = value & 0x1;
    bit ^= (value & (1 << 2)) >> 2;
    bit ^= (value & (1 << 3)) >> 3;
    bit ^= (value & (1 << 5)) >> 5;
    *reg = (value >> 1) | (bit << 15);
}

