/**
 * @file AvinaColor..c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-14
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
    system("@cls||clear");

    char color_secreto[] = "azul";
    char color_adivinado[20]; // Tamaño suficiente para almacenar cualquier color
    int bandera = 1;

    do {
        // Solicitar al usuario que adivine el color
        printf("Adivina el color (rojo, verde, morado, azul, amarillo): ");
        scanf("%s", color_adivinado);

        // Verificar si el color es correcto
        if (strcmp(color_adivinado, color_secreto) == 0) {
            printf("¡Felicidades! Adivinaste el color correcto.\n");
            bandera = 0;
        } else {
            printf("Intenta de nuevo.\n");
        }
    } while (bandera);

    return 0;
}