#include <stdio.h>
#include "circuit.h"

double calculateSeriesResistance(Component components[], int componentCount) {
    double totalResistance = 0.0;
    for (int i = 0; i < componentCount; i++) {
        if (components[i].connection == 'S') {
            totalResistance += components[i].value;
        }
    }
    return totalResistance;
}

double calculateParallelResistance(Component components[], int componentCount) {
    double totalResistance = 0.0;
    for (int i = 0; i < componentCount; i++) {
        if (components[i].connection == 'P') {
            if (components[i].value != 0) {
                totalResistance += 1.0 / components[i].value;
            }
        }
    }
    return totalResistance != 0 ? 1.0 / totalResistance : 0.0;
}

void readCircuitFile(const char *filename, Component components[], int *componentCount) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Could not open file");
        return;
    }

    *componentCount = 0;
    while (fscanf(file, "%c %lf %c\n", &components[*componentCount].type, &components[*componentCount].value, &components[*componentCount].connection) == 3) {
        (*componentCount)++;
        if (*componentCount >= MAX_COMPONENTS) {
            printf("Maximum number of components reached.\n");
            break;
        }
    }
    fclose(file);
}
