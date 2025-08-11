#include <stdio.h>
#include <stdlib.h>

int main() {
    int limit;
    char *text = NULL;

    printf("Enter the maximum length of the string: ");
    scanf("%d", &limit);

    // Allocate memory dynamically (+1 voor \0)
    text = (char *)malloc((limit + 1) * sizeof(char));
    if (text == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter a string (max %d characters): ", limit);
    
    scanf(" %s", text);

    printf("You entered: %s\n", text);
    free(text);

    return 0;
}
