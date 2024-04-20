#include <stdio.h>
int main(){
int lado, perimetro, area; 
printf("Ingrese el lado de un cuadrado: ");
scanf("%d", &lado);
perimetro=4*lado;
area=lado*lado;

printf("El perimetro del cuadrado es: %d\n",perimetro);
Printf("El area de un cuadrado es: %d\n",area);
return 0;
}