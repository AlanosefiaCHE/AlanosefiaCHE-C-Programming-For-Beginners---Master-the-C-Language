#include <stdio.h>

// Deze functie zorgt ervoor dat de waarde op het geheugenadres wordt aangepast
void square(int *numPtr) {
    *numPtr = (*numPtr) * (*numPtr);
}

int main() {
    int number = 5;

    printf("Before squaring: %d\n", number);
    square(&number); 
    printf("After squaring: %d\n", number);

    return 0;
}
