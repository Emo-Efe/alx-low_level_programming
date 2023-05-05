#include "main.h"

/**
 * flip_bits - function that counts the number of bits to change
 * into and get from one number to another
 * @n: first num
 * @m: second num
 *
 * Return:the  number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m) {
    unsigned int count = 0;
    unsigned long int exclusive = n ^ m;

    for (int i = 63; i >= 0; i--) {
        unsigned long int current = exclusive >> i;
        if (current & 1) {
            count++;
        }
    }

    return count;
}
