#include <stdio.h>
#include <stdbool.h>

// Functie om lengte van string te bepalen (zonder strlen)
int stringLength(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Functie om twee strings te concatenaten zonder strcat
void stringConcat(char result[], const char str1[], const char str2[]) {
    int i = 0, j = 0;

    // Eerst kopieer str1 naar result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Daarna plak str2 achteraan
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Afsluiten met null-terminator
    result[i] = '\0';
}

// Functie om te checken of 2 strings gelijk zijn (zonder strcmp)
bool stringEqual(const char str1[], const char str2[]) {
    int i = 0;

    // Loop zolang beide strings hetzelfde karakter hebben en niet eindigen
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        i++;
    }

    // Check of beide strings exact op hetzelfde punt eindigen
    if (str1[i] == '\0' && str2[i] == '\0') {
        return true;
    } else {
        return false;
    }
}

int main() {
    char str1[] = "jason";
    char str2[] = "ok";
	char str3[] = "whetever";
    char result[100];

    printf("%d %d  %d\n", stringLength(str1), stringLength(str2),stringLength(str3));

    stringConcat(result, str1, str2);
    printf("Concat van '%s' en '%s' is '%s'\n", str1, str2, result);

    // Test stringEqual
    printf("Zijn '%s' en '%s' gelijk? %s\n", str1, str2, stringEqual(str1, str2) ? "Ja" : "Nee");
    printf("Zijn '%s' en '%s' gelijk? %s\n", str1, "Hallo", stringEqual(str1, "Hallo") ? "Ja" : "Nee");

    return 0;
}
