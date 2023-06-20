#include <stdio.h>

int main() {
    

    // declaracion de punteros y variables
    int *ptrI, varI;
    char *ptrC, varC;
    float *ptrF, varF;

    //RELACION ENTRE PUNTERO Y VARIABLE
 
    ptrI = &varI;
    ptrC = &varC;
    ptrF = &varF;

*ptrI = 89;
*ptrC = 56;
*ptrF = 45;

printf("%d %p\n",varI, ptrI);
printf("%d %p\n",varC, ptrC);
printf("%c %p\n",varF, ptrF);
// hola

return 0;
}