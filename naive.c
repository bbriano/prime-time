#include <stdio.h>
#include <stdlib.h>
#define PRIME_COUNT 9000

// Complexity: O(N^2)
int main(int argc, char *argv[]) {
    int N;
    if (argc == 1) N = PRIME_COUNT;
    else if (argc == 2) N = atoi(argv[1]);
    else exit(1);

    int isprime;
    int divisor;
    int count = 0;
    int n = 2;

    while (count < PRIME_COUNT) {
        isprime = 1;
        for (divisor = 2; divisor <= n-1; divisor++)
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
