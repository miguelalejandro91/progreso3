#include <stdio.h>

int main() {
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};  // Arreglo de vocales
    char *ptr = vowels;  // Puntero al primer elemento del arreglo
    
    // Imprimir las vocales
    printf("Vocales: ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", *(ptr + i));  // Acceder a cada vocal mediante el puntero
    }
    printf("\n");
    
    // Cambiar el valor de 'u' por 56
    *(ptr + 4) = 56;
    
    // Imprimir las vocales actualizadas
    printf("Vocales actualizadas: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  // Acceder a cada vocal mediante el puntero
    }
    printf("\n");
    
    return 0;
}
