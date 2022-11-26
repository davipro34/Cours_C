// main.c
//
// Program's name : exoStructures4
//
// Created by David Atlan on 11/24/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

int main(int argc, char *argv[])
{
    // Utilisez un pointeur sur une structure
    // https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/16119-creez-vos-propres-types-de-variables

    Coordonnees monPoint;

    printf("Valeur de x avant initialisation : %d\n", monPoint.x);
    printf("Valeur de y avant initialisation : %d\n", monPoint.y);
    printf("\n");

    initialiserCoordonnees(&monPoint);

    printf("Valeur de x initialisee par la fonction : %d\n", monPoint.x);
    printf("Valeur de y initialisee par la fonction : %d\n", monPoint.y);

    return 0;
}

// Fontions :

void initialiserCoordonnees(Coordonnees* point) // Pour parametre, nous creons une variable de type pointeur pour l'utiliser dans la fonction
{
    // Initialisation de chacun des membres de la structure (deux syntaxes au resultat identique)
    
    (*point).x = 94; // Ici nous passons par le pointeur avec la syntaxe " (*point). "
    point->y = 98; // Ici nous passons par le pointeur avec la syntaxe " point-> ", cette syntaxe n'est valable que pour un pointeur, pas une variable.
}