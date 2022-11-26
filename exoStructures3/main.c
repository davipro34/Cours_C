// main.c
//
// Program's name : exoStructures3
//
// Created by David Atlan on 11/23/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

int main(int argc, char *argv[])
{
    // Utilisez un pointeur sur une structure
    // https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/16119-creez-vos-propres-types-de-variables

    
    Coordonnees point = {0, 0};
    point.x = 10;
    point.y = 20;

    Personne joueurs[2] = {0, 0};

    for (int i = 0 ; i < 2 ; i++)
    {
         int joueurNb = i+1;
         printf("Joueur %d ; Quel est votre nom ?\n", joueurNb);
         scanf("%s", joueurs[i].nom);
         printf("\n");
         printf("Votre prenom ?\n");
         scanf("%s", joueurs[i].prenom);
         printf("\n");
         printf("Joueur %d; Vous vous appelez %s %s\n\n", joueurNb, joueurs[i].prenom, joueurs[i].nom);
    }

    printf("Voici la liste des joueurs : \n");
    for (int i = 0 ; i < 2 ; i++)
    {
        printf("%s %s\n", joueurs[i].prenom, joueurs[i].nom);
    }

    printf("\n");

    return 0;
}

// Fontions :
