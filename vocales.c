#include <stdio.h>

int main() {


    char vocales[] = {'a', 'e', 'i', 'o', 'u'};  // Declaración del arreglo de vocales
    char *puntero = &vocales[0];
    *puntero = 'x';


    int i;

    printf("Vocales: ");
    for (i = 0; i < 5; i++) {
        printf("%c ", vocales[i]);  // Imprime la vocal actual
    }

    return 0;
}