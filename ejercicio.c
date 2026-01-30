#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ESTUDIANTES 100
#define MAX_NOMBRE 100
#define MAX_CODIGO 20

typedef struct {
    char nombre[MAX_NOMBRE];
    char codigo[MAX_CODIGO];
    int edad;
    float promedio;
    bool activo;
} Estudiante;

void actualizarNombre(Estudiante *e, char nuevoNombre[]) {
    strcpy(e->nombre, nuevoNombre);
}

void actualizarCodigo(Estudiante *e, char nuevoCodigo[]) {
    strcpy(e->codigo, nuevoCodigo);
}

void actualizarEdad(Estudiante *e, int nuevaEdad) {
    e->edad = nuevaEdad;
}

void actualizarPromedio(Estudiante *e, float nuevoPromedio) {
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) {
        e->promedio = nuevoPromedio;
    } else {
        printf("Error: El promedio debe estar entre 0.0 y 10.0\n");
    }
}

void actualizarActivo(Estudiante *e, bool nuevoEstado) {
    e->activo = nuevoEstado;
}

void mostrarNombre(Estudiante e) { printf("Nombre: %s\n", e.nombre); }
void mostrarCodigo(Estudiante e) { printf("Matricula: %s\n", e.codigo); }
void mostrarEdad(Estudiante e) { printf("Edad: %d anos\n", e.edad); }
void mostrarPromedio(Estudiante e) { printf("Promedio: %.2f\n", e.promedio); }
void mostrarActivo(Estudiante e) { printf("Estado: %s\n", e.activo ? "Activo" : "Inactivo"); }

void mostrarInformacionCompleta(Estudiante e) {
    printf("\n--- Datos del Estudiante ---\n");
    mostrarNombre(e);
    mostrarCodigo(e);
    mostrarEdad(e);
    mostrarPromedio(e);
    mostrarActivo(e);
    printf("----------------------------\n");
}

int main() {
    Estudiante lista[MAX_ESTUDIANTES];
    int total = 0;
    int opcion;

    do {
        printf("\nSISTEMA DE GESTION ACADEMICA\n");
        printf("1. Agregar estudiante\n");
        printf("2. Mostrar un estudiante especifico (por matricula)\n");
        printf("3. Mostrar todos los estudiantes\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        getchar();

        if (opcion == 1) {
            if (total < MAX_ESTUDIANTES) {
                char n[MAX_NOMBRE], c[MAX_CODIGO];
                int ed; float pr; int act;

                printf("Nombre completo: "); 
                fgets(n, MAX_NOMBRE, stdin); 
                n[strcspn(n, "\n")] = 0;

                printf("Matricula: "); 
                fgets(c, MAX_CODIGO, stdin); 
                c[strcspn(c, "\n")] = 0;

                printf("Edad: "); 
                scanf("%d", &ed);
                printf("Promedio (0-10): "); 
                scanf("%f", &pr);
                printf("Estado (1: Activo, 0: Inactivo): "); 
                scanf("%d", &act);
                getchar();

                actualizarNombre(&lista[total], n);
                actualizarCodigo(&lista[total], c);
                actualizarEdad(&lista[total], ed);
                actualizarPromedio(&lista[total], pr);
                actualizarActivo(&lista[total], act == 1);
                total++;
                printf("\nEstudiante agregado con exito.\n");
            }
        } 
        else if (opcion == 2) {
            char busqueda[MAX_CODIGO];
            printf("Ingrese la matricula a buscar: ");
            // Usamos fgets y quitamos el salto de linea para que coincida bien
            fgets(busqueda, MAX_CODIGO, stdin);
            busqueda[strcspn(busqueda, "\n")] = 0;

            bool encontrado = false;
            for(int i = 0; i < total; i++) {
                if (strcmp(lista[i].codigo, busqueda) == 0) {
                    mostrarInformacionCompleta(lista[i]);
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) printf("Estudiante no encontrado.\n");
        } 
        else if (opcion == 3) {
            if (total == 0) printf("\nNo hay estudiantes registrados.\n");
            for(int i = 0; i < total; i++) {
                mostrarInformacionCompleta(lista[i]);
            }
        }
    } while (opcion != 4);

    return 0;
}