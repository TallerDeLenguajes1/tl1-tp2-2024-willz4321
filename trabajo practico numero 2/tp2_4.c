#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Necesario para strcpy

struct compu {
    int velocidad; // entre 1 y 3 GHz
    int anio; // entre 2015 y 2023
    int cantidad; // entre 1 y 8
    char tipo_cpu[10]; // Cambie esta funcion para que se pueda guardar el nombre completo del procesador
};

void mostrarPCs(struct compu pcs[], int n) {
    for(int i = 0; i < n; i++) {
        printf("PC %d: Velocidad: %d GHz, Año: %d, Cantidad de núcleos: %d, Tipo de CPU: %s\n", i+1, pcs[i].velocidad, pcs[i].anio, pcs[i].cantidad, pcs[i].tipo_cpu);
    }
}

void mostrarMasVieja(struct compu pcs[], int n) {
    int idx = 0;
    for(int i = 1; i < n; i++) {
        if(pcs[i].anio < pcs[idx].anio) {
            idx = i;
        }
    }
    printf("La PC más vieja es: Velocidad: %d GHz, Año: %d, Cantidad de núcleos: %d, Tipo de CPU: %s\n", pcs[idx].velocidad, pcs[idx].anio, pcs[idx].cantidad, pcs[idx].tipo_cpu);
}

void mostrarMayorVelocidad(struct compu pcs[], int n) {
    int idx = 0;
    for(int i = 1; i < n; i++) {
        if(pcs[i].velocidad > pcs[idx].velocidad) {
            idx = i;
        }
    }
    printf("La PC con mayor velocidad es: Velocidad: %d GHz, Año: %d, Cantidad de núcleos: %d, Tipo de CPU: %s\n", pcs[idx].velocidad, pcs[idx].anio, pcs[idx].cantidad, pcs[idx].tipo_cpu);
}

int main(int argc, char const *argv[]) {
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    struct compu pcs[5];

    for(int i = 0; i < 5; i++) {
        int tipo;
        printf("Ingrese los datos de la PC %d:\n", i+1);
        printf("Velocidad (1-3 GHz): ");
        scanf("%d", &pcs[i].velocidad);
        printf("Año (2015-2023): ");
        scanf("%d", &pcs[i].anio);
        printf("Cantidad de núcleos (1-8): ");
        scanf("%d", &pcs[i].cantidad);
        printf("Tipo de CPU (0-5 para Intel, AMD, Celeron, Athlon, Core, Pentium): ");
        
        scanf("%d", &tipo);
        strcpy(pcs[i].tipo_cpu, tipos[tipo]);
    }

    mostrarPCs(pcs, 5);
    mostrarMasVieja(pcs, 5);
    mostrarMayorVelocidad(pcs, 5);

    return 0;
}
