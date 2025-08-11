#include <stdio.h>
#define FILENAME "test.txt"
int main() {
    FILE *file;
    int count = 0;
    int ch;

	// opent het text bestand indien mogelijk
    file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Kan bestand niet openen.\n");
        return 1;
    }

	// Leest de characters tot volgende line
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;  
        }
    }
	// controle voor de laatste line, omdat deze niet eindigt met \n
    fseek(file, -1, SEEK_END); // gaat 1 byte terug om EOF te vermijden.
    if (ftell(file) > 0) {
        fseek(file, -1, SEEK_END);
        ch = fgetc(file);
        if (ch != '\n') {
            count++;
        }
    }

    fclose(file);

    printf("Aantal regels in bestand: %d\n", count);

    return 0;
}
