#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int i, n;
    char* buffer;

    printf("Berapa lama Anda ingin string? ");
    scanf_s("%d", &i);

    buffer = (char*)malloc(i + 1);

    if (buffer == NULL) {
        exit(1);
    }

    for (n = 0; n < i; n++) {
        buffer[n] = rand() % 26 + 'a';
    }

    buffer[i] = '\0';

    printf("Random string: %s\n", buffer);
    free(buffer);

    _getch();
    return 0;
}