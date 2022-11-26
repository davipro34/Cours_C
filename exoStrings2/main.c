// main.c
//
// Program's name : exoStrings2
//
// Created by David Atlan on 11/23/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype de fonctions


int main(int argc, char *argv[]) { // Équivalent de int main()
    
    char chaine1[] = "Texte de test", chaine2[] = "Texte de test";

    if (strcmp(chaine1, chaine2) == 0) // Si chaines identiques
    {
        printf("Les chaines sont identiques\n");
    }
    else
    {
        printf("Les chaines sont differentes\n");

    }

    return 0;
}

// Fonctions
