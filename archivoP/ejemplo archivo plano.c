#include <stdio.h>
int main (){
FILE *archivoP;
char c;
archivoP = fopen("archivo2.txt", "w");
fputs("Este es un ejemplode escritura",archivoP);

return 0;
}




/*while (!feof(archivoP))
{
    c = fgetc(archivoP);
    putchar(c);
}
fclose(archivoP);
return 0;
}*/