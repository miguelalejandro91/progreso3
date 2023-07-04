/*elaborar un programa en c que En una Institución educativa se almacenan datos 
sobre el número de alumnos que han ingresado a sus diferentes carreras en los 
dos semestres anuales y en los últimos 5 años, los datos ya deben estar en una 
base de datos previamente construida. Las carreras son:

1. Ingeniería de Software.
2. Administración.
3. Economía.
4. Relaciones Internacionales.
5. Matemáticas.
6. Contabilidad.
7. Ingeniería Industrial.

Escriba un programa que:
a) Implemente un menú de opciones para el usuario y que el programa siempre se encuentre en ejecucion.
b) Lea y escriba los datos desde un archivo plano.
c) Calcule el año en que ingresó la mayor cantidad de alumnos a la universidad.
d) Calcule la Carrera que recibió la mayor cantidad de alumnos en el último año.
e) Calcule en qué año la carrera de Ingeniería de Software recibió la mayor cantidad de alumnos.
 */

#include <stdio.h>

#define NUM_CARRERAS 7
#define NUM_ANIOS 5

void imprimirAnioMaxAlumnos(int anioMaxAlumnos) {
    printf("El anio con la mayor cantidad de alumnos fue el anio %d\n", anioMaxAlumnos);
}

void imprimirCarreraMaxAlumnosUltimoAnio(int carreraMaxAlumnosUltimoAnio) {
    printf("La carrera con la mayor cantidad de alumnos en el ultimo anio fue la carrera %d\n", carreraMaxAlumnosUltimoAnio);
}

void imprimirAnioMaxAlumnosIngenieriaSoftware(int anioMaxAlumnosIngenieriaSoftware) {
    printf("La carrera de Ingenieria de Software recibio la mayor cantidad de alumnos en el anio %d\n", anioMaxAlumnosIngenieriaSoftware);
}
void guardarResultadoEnArchivo(const char* nombreArchivo, const char* resultado) {
    FILE* archivo = fopen(nombreArchivo, "a");  // Abrir el archivo en modo "append" para agregar al final del archivo
    if (archivo != NULL) {
        fprintf(archivo, "%s\n", resultado);  // Escribir el resultado en el archivo
        fclose(archivo);  // Cerrar el archivo
        printf("Resultado guardado en el archivo %s\n", nombreArchivo);
    } else {
        printf("Error al abrir el archivo %s\n", nombreArchivo);
    }
}
void imprimirMenu() {
    printf("\nMENU DE OPCIONES\n");
    printf("1. Mostrar anio con la mayor cantidad de alumnos\n");
    printf("2. Mostrar carrera con la mayor cantidad de alumnos en el ultimo anio\n");
    printf("3. Mostrar anio en el que Ingenieria de Software recibio la mayor cantidad de alumnos\n");
    printf("4. Salir\n");
    printf("Ingrese el numero de la opcion deseada: ");
}
