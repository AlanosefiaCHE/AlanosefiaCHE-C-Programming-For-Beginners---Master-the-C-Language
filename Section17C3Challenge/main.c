#include <stdio.h>
#include <stdlib.h>

#define FILENAME "section17c3.txt"

int main() {
    FILE *fp;
    long file_size;
    int ch;

    // Open bestand
    fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Zet pointer aan het einde
    fseek(fp, 0, SEEK_END);

    // Positie van pointer ophalen
    file_size = ftell(fp);

    // Van achter naar voren gaan in bestand
    for (long i = file_size - 1; i >= 0; i--) {
        fseek(fp, i, SEEK_SET);  // gaat naar byte i
        ch = fgetc(fp);          // leest character
        putchar(ch);           
    }

    fclose(fp);
    return 0;
}
