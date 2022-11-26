// main.c
//
// Program's name : exoFiles2
//
// Created by David Atlan on 11/26/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

#define TAILLE_MAX 1000 // Pour un tableau de taille 1000

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    char chaine[TAILLE_MAX] = ""; // Chaine vide de taille TAILLE_MAX

    fichier = fopen("dossier/test.txt", "r");

    if (fichier != NULL)
    {
        fgets(chaine, TAILLE_MAX, fichier); // Dans fichier, on lit maximum TAILLE_MAX caracteres, on stocke le tout dans "chaine"
        printf("%s\n", chaine); // On affiche la chaine
        fclose(fichier); // On ferme le fichier  
    }
    
    return 0;
}
