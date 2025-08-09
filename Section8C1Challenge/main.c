#include <stdio.h>
#include <stdbool.h>

int main() {
    int primes[100]; // genoeg ruimte voor alle primes tot 100
    int count = 2;   // we starten met 2 primes (2 en 3)
    int i, j;
    bool isPrime;

    // Hard-code de eerste twee primes
    primes[0] = 2;
    primes[1] = 3;

    // Vind primes van 4 tot en met 100
    for (i = 4; i <= 100; i++) {
        isPrime = true;

        // Check deelbaarheid door eerdere primes
        for (j = 0; j < count; j++) {
            if (i % primes[j] == 0) {
                isPrime = false;
                break;
            }
        }

        // Als prime → opslaan in array
        if (isPrime) {
            primes[count] = i;
            count++;
        }
    }

    // Print alle primes op één regel, gescheiden door spaties
    for (i = 0; i < count; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");

    return 0;
}
