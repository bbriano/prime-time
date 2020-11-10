#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PRIME_COUNT 9000

// Complexity: O(N sqrt(N))
int main(int argc, char *argv[]) {
    int N;
    if (argc == 1) N = PRIME_COUNT;
    else if (argc == 2) N = atoi(argv[1]);
    else exit(1);

    int isprime;
    int sqrt_n;
    int divisor;
    int count = 0;
    int n = 2;

    while (count < PRIME_COUNT) {
        sqrt_n = sqrt(n);
        isprime = 1;
        for (divisor = 2; divisor <= sqrt_n; divisor++)
            if (n % divisor == 0)
                isprime = 0;
        if (isprime) {
            printf("%d ", n);
            count++;
        }
        n++;
    }
    printf("\n");
}
