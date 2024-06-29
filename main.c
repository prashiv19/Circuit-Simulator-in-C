#include <stdio.h>
#include "circuit.h"

int main() {
    Component components[MAX_COMPONENTS];
    int componentCount = 0;
    char filename[50];

    printf("Enter the circuit description file name: ");
    scanf("%s", filename);

    readCircuitFile(filename, components, &componentCount);

    double totalSeriesResistance = calculateSeriesResistance(components, componentCount);
    double totalParallelResistance = calculateParallelResistance(components, componentCount);

    printf("Total Series Resistance: %.2f ohms\n", totalSeriesResistance);
    printf("Total Parallel Resistance: %.2f ohms\n", totalParallelResistance);

    return 0;
}
