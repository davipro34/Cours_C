// main.c
//
// Program's name : exoFiles1
//
// Created by David Atlan on 11/26/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;

    int caractereActuel = 0;

    fichier = fopen("dossier/test.txt", "r+");
    if (fichier != NULL)
    {
        printf("Fichier test.txt ouvert avec succes !\n");
        // On lit et on écrit dans le fichier
        // ...
        fputc('A', fichier); // Ecriture du caractere A
        fputc('\n', fichier); // Ecriture du caractere saut de ligne
        fputs("Salut les Devs,\nBienvenue sur OpenClassRooms !\n", fichier);
        fprintf(fichier, "J'ecrit une chaine de caracteres formatee avec fprintf !\n");
        fclose(fichier); // On ferme le fichier qui a été ouvert
    }
    else
    {
        printf("Impossible d'ouvrir le fichier test.txt !\n");
    }

    fichier = fopen("dossier/test.txt", "r");
    if (fichier != NULL)
    {
        // Boucle de lecture des caracteres un a un
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractere
            printf("%c", caractereActuel); // On l'affiche

        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourne EOF (fin de fichier)
        
    }

    fclose(fichier); // On ferme le fichier qui a été ouvert
    return 0;
}

// Fontions :
