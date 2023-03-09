#include <stdio.h>
#include <string.h>

#define MAX_STR_LENGTH 20

int main() {
    char myString[MAX_STR_LENGTH];

    printf("Zadejte text:\n");
    fgets(myString, sizeof myString, stdin);


    for (int i = 0; i < strlen(myString); i++) {
        if ((i+1) % 3 == 0) {
            myString[i] = '_';
        }
    }

    printf("\nUpraveny retezec:\n");
    printf("%s", myString);

    printf("\nVypis pomoci 'puts':\n");
    puts(myString);

    return 0;
}