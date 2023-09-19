#include "main.h"

/**
 * main - reset_to_98
 *
 * Return: Always 0.
 */

void reset_to_98(int *n) {
    *n = 98;
}

int main() {
    int num = 42;
    printf("Before reset: %d\n", num);
    
    // Call the function to reset num to 98
    reset_to_98(&num);
    
    printf("After reset: %d\n", num);
    
    return 0;
}
