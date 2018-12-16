#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static uint16_t CEILING=1000;
static uint8_t SEED_NUMS[] = {3,5};

uint16_t* get_multiples(uint8_t number, uint16_t ceiling) {
  /* Gets all the multiples of a number up to the ceiling */
  uint16_t iterations = ceiling/number;
  uint16_t *multiples = (uint16_t *)malloc(sizeof(uint16_t) * (iterations));

  for(uint16_t i=1; i<iterations; i++) {
    uint16_t result = number*i;
    multiples[i-1] = result;
  }

  return multiples;
}

void main() {
  uint8_t num = 3;
  // TODO: make an array of pointers to each number's multiples
  //       to be iterated through and added
  uint16_t* multiples = get_multiples(num, CEILING);
  free(multiples);
}
