#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#define PRIME_COUNT 9000

// Complexity: O(N sqrt(N))
int main(int argc, char *argv[]) {
    int N;
    if (argc == 1) N = PRIME_COUNT;
    else if (argc == 2) N = atoi(argv[1]);
    else exit(1);

    int isprime;
    int sqrt_n;
    int *primes = malloc(sizeof(int) * N);
    int *top = primes;
    int *divisor;
    int n = 3;

    *top++ = 2;
    printf("2 ");
    while (top < primes + N) {
        sqrt_n = sqrt(n);
        isprime = 1;
        divisor = primes;
        while (divisor < top && *divisor <= sqrt_n) {
            if (n % *divisor == 0)
                isprime = 0;
            divisor++;
        }
        if (isprime) {
            *top++ = n;
            printf("%d ", n);
        }
        n += 2;
    }
    printf("\n");

    free(primes);
    return 0;
}
