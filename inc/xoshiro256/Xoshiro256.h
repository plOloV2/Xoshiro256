/*
    This is a implementation of Xoshiro256** PRNG algorithm.

    Oryginal source:
    https://prng.di.unimi.it/xoshiro256starstar.c
*/

#ifndef XOSHIRO256_H
#define XOSHIRO256_H

#include <stdint.h>
#include "Xos256_state.h"

void create_rand_seed(uint64_t* seed);

uint64_t xoshiro_next(xoshiro256_state *state);

void xoshiro_init(xoshiro256_state *state, uint64_t seed);

#endif
