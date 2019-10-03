#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct phone {
    int memory;
    char brand[128];
    char model[128];
    int cpuSpeed;
} cellphone;

char *upperCase(char *data) {
    int n = strlen(data);
    char *copy = malloc((1 + n) * sizeof(char));
    for (int i = 0; i < n; ++i) {
        copy[i] = toupper(data[i]);
    }
    return copy;
}

void sortPhonesByMemory(cellphone phones[], int n) {
    cellphone tmp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (phones[j].memory > phones[j + 1].memory) {
                tmp = phones[j + 1];
                phones[j + 1] = phones[j];
                phones[j] = tmp;
            }
        }
    }
}