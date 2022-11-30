// main.c
//
// Program's name : exoFiles3
//
// Created by David Atlan on 11/30/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int score[3] = {0}; // Tableau contenant les 3 meilleurs scores

    fichier = fopen("dossier/test.txt", "r");

    if (fichier != NULL)
    {
        fscanf(fichier, "%d %d %d", &score[0], &score[1], &score[2]);
        printf("Les meilleurs scores sont : %d, %d et %d", score[0], score[1], score[2]);

        fclose(fichier); // On ferme le fichier  
    }
    
    return 0;
}
