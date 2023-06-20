#include <stdio.h>

struct Alumno {
    char nombre[100];
    char direccion[100];
    char carrera[100];
    float promedio;
};



int main() {
    struct Alumno alumnos[3];

    for (int i = 0; i < 3; i++) {

        
        printf("Ingrese los datos del alumno %d:\n", i+1);
        
        // lee el nombre del alumno
        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre);
        fflush(stdin);
        
        // lee la direccion del alumno
        printf("Direccion: ");
        gets(alumnos[i].direccion);
        
        // lee la carrera del alumno
        printf("Carrera: ");
        gets(alumnos[i].carrera);
        
        // lee el promedio del alumno
        printf("Promedio: ");
        scanf("%f", &alumnos[i].promedio);
        fflush(stdin);
        
        printf("\n");
    }

    printf("Datos de los alumnos:\n");
    for (int i = 0; i < 3; i++) {
        printf("Alumno %d:\n", i+1); 
        printf("Nombre: %s\n", alumnos[i].nombre); 
        printf("Direccion: %s\n", alumnos[i].direccion);
        printf("Carrera: %s\n", alumnos[i].carrera);
        printf("Promedio: %.2f\n\n", alumnos[i].promedio);
    }

    return 0;
}
