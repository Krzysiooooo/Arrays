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

float avgArray(int t[], int n) {
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum = sum + t[i];
    }
    return sum / n;
};

int minArray(int t[], int n) {
    int min = t[0];
    for (int i = 1; i < n; ++i) {
        if (t[i] < min) {
            min = t[i];
        }
    }
    return min;
}

int maxArray(int t[], int n) {
    int max = t[0];
    for (int i = 1; i < n; ++i) {
        if (t[i] > max) {
            max = t[i];
        }
    }
    return max;
}

void bubbleSort(int *t, int l) {
    int tmp;
    for (int i = 0; i < l - 1; ++i) {
        for (int j = 0; j < l - i - 1; ++j) {
            if (t[j] > t[j + 1]) {
                tmp = t[j + 1];
                t[j + 1] = t[j];
                t[j] = tmp;
            }
        }
    }
}

void insertionSort(int *t, int l) {
    int tmp, j;
    for (int m = 1; m < l - 1; ++m) {
        tmp = t[m + 1];
        j = m;
        while (tmp < t[j] && j >= 0) {
            t[j + 1] = t[j];
            j--;
        }
        t[j + 1] = tmp;
    }
}


int main() {
    int t[] = {11, 20, 2, 59, 120, 2, 88, 1};
    int n = sizeof(t) / sizeof(t[0]);
    //bubbleSort(t, n);
    insertationSort(t, n);
    printArray(t, n);
    //int min = minArray(t, n);
    //int max = maxArray(t, n);
    //printf("%i", max);
    return 0;
}