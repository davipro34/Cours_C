// main.c
//
// Program's name : exoStructures2
//
// Created by David Atlan on 11/23/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

int main(int argc, char *argv[])
{
    Coordonnees point;
    point.x = 10;
    point.y = 20;

    Personne joueurs[2]; // On travaille avec un tableau

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

    printf("Voici les joueurs %s, %s\n", joueurs[0].prenom, joueurs[1].prenom);

    return 0;
}
