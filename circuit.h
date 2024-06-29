#ifndef CIRCUIT_H
#define CIRCUIT_H

#define MAX_COMPONENTS 100

typedef struct {
    char type;  // 'R' for resistor
    double value;  // Resistance value in ohms
    char connection;  // 'S' for series, 'P' for parallel
} Component;

double calculateSeriesResistance(Component components[], int componentCount);
double calculateParallelResistance(Component components[], int componentCount);
void readCircuitFile(const char *filename, Component components[], int *componentCount);

#endif
