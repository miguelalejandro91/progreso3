#include <stdio.h>
int main (){
FILE *archivoP;

char c;

fopen("archivo1.txt", "r");
while (!feof(archivoP))
{
    c = fgetc(archivoP);
    putchar(c);
}

return 0;
}