#include <stdio.h>

int stringLength(const char *str) {
    const char *start = str;

    // Loop tot \0 is bereikt (einde van een string)
    while (*str != '\0') {
        str++;  // pointer naar het volgende karakter
    }

    // lengte is verschil tussen eind en begin pointer
    return (int)(str - start);
}

int main() {
    const char *testStr = "Hallo wereld!";

    printf("De lengte van \"%s\" is %d\n", testStr, stringLength(testStr));

    return 0;
}
