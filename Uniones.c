#include <stdio.h>

union numeros{
    float var;
    unsigned char vect[4];
}numeros;

int main(){
    union numeros numero;
    printf("Ingrese un numero:");
    scanf("%f", &numero.var);
    printf("\nEl numero pasado a hexadecimal es: 0x");
    for(int i=3;i>=0;i--){
        printf("%x |  ", numero.vect[i]);
    }
}
