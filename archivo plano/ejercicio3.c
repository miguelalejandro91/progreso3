#include <stdio.h>
#include <stdlib.h>

// Estructura para almacenar los datos de un alumno
typedef struct {
    char nombre[50];
    char direccion[100];
    char carrera[50];
    float promedio;
} Alumno;

int main() {
    FILE *archivo;
    int i;

    // Abrir el archivo en modo escritura
    archivo = fopen("alumnos.txt", "w");

    // Verificar si el archivo se abrió correctamente
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.");
        
    }

    // Arreglo para almacenar los datos de los alumnos
    Alumno alumnos[3];

    // Solicitar los datos de los alumnos al usuario
    for (i = 0; i < 3; i++) {
        printf("Ingrese los datos del alumno %d:\n", i + 1);

        // Solicitar nombre
        printf("Nombre: ");
        fflush(stdin); // Limpiar el búfer de entrada
        gets(alumnos[i].nombre);

        // Solicitar dirección
        printf("Direccion: ");
        fflush(stdin); // Limpiar el búfer de entrada
        gets(alumnos[i].direccion);

        // Solicitar carrera
        printf("Carrera: ");
        fflush(stdin); // Limpiar el búfer de entrada
        gets(alumnos[i].carrera);

        // Solicitar promedio
        printf("Promedio: ");
        scanf("%f", &alumnos[i].promedio);

        // Escribir los datos del alumno en el archivo
        fprintf(archivo, "Nombre: %s\n", alumnos[i].nombre);
        fprintf(archivo, "Direccion: %s\n", alumnos[i].direccion);
        fprintf(archivo, "Carrera: %s\n", alumnos[i].carrera);
        fprintf(archivo, "Promedio: %.2f\n\n", alumnos[i].promedio);
    }

    // Cerrar el archivo
    fclose(archivo);

    printf("Datos de los alumnos guardados en el archivo 'alumnos.txt'.\n");

    return 0;
}


