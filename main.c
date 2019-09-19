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

int sumArray(int a[], int n) {
    int sum = 0;
    for (int i = 0; n > i; i++) {
        sum = sum + a[i];
    }
    return sum;
}

float avgArray(int t[], int n){
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum = sum + t[i];
    }
    return sum/n;
};

int main() {
    int t[] = {1,2,3,4,5};
    int n = sizeof(t) / sizeof(t[0]);
    int sum = sumArray(t, n);
    printf("%i", sum);
    return 0;
}