#include <stdio.h>
#include <stdlib.h>

int *inputArray() {
    int l;
    printf("Jak dluga tablica?\n");
    scanf("%i", &l);
    int *t = malloc(l * sizeof(int));
    for (int i = 0; i < l; ++i) {
        printf("Wprowadz %i/%i liczbe\n", i, l);
        scanf("%i", &t[i]);
    }
    return t;
}

void printArray(int *v, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", *(v + i));
    }
}

int sumArray(int t[], int s) {
    // TODO Zadanie domowe
}

int main() {
    int *t = inputArray();
    printArray(t, 4);
    return 0;
}