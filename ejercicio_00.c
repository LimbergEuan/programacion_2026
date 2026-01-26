#include <stdio.h>
#include <string.h>

// Definimos la estructura con el término que prefieres
struct Estudiante {
    char nombre[100];
    char matricula[20]; // Ya no es "codigo", ahora es matrícula
};

// Función para limpiar el buffer y evitar que se salte los scanf
void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    struct Estudiante alumnos[50];
    int opcion, totalEstudiantes = 0;

    do {
        printf("\n--- MENU DE GESTION ---");
        printf("\n1. Agregar estudiante");
        printf("\n2. Mostrar un estudiante especifico (por indice)");
        printf("\n3. Mostrar todos los estudiantes");
        printf("\n4. Salir");
        printf("\nSelecciona una opcion: ");
        scanf("%d", &opcion);
        limpiarBuffer();

        switch (opcion) {
            case 1:
                printf("Nombre completo: ");
                scanf(" %[^\n]", alumnos[totalEstudiantes].nombre);
                
                // Aquí está el cambio que pediste para que diga Matrícula
                printf("Matrícula: "); 
                scanf("%s", alumnos[totalEstudiantes].matricula);
                
                totalEstudiantes++;
                printf("\n¡Estudiante agregado con exito!\n");
                break;

            case 2:
                if (totalEstudiantes > 0) {
                    int idx;
                    printf("Ingresa el indice (0 a %d): ", totalEstudiantes - 1);
                    scanf("%d", &idx);
                    if (idx >= 0 && idx < totalEstudiantes) {
                        printf("\nNombre: %s", alumnos[idx].nombre);
                        printf("\nMatrícula: %s\n", alumnos[idx].matricula);
                    } else {
                        printf("\nIndice no valido.");
                    }
                } else {
                    printf("\nNo hay estudiantes registrados.");
                }
                break;

            case 3:
                printf("\n--- Lista de Estudiantes ---");
                for (int i = 0; i < totalEstudiantes; i++) {
                    printf("\n%d. %s - Matrícula: %s", i, alumnos[i].nombre, alumnos[i].matricula);
                }
                printf("\n");
                break;

            case 4:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 4);

    return 0;
}