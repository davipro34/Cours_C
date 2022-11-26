// main.c
//
// Program's name : exoStructures
//
// Created by David Atlan on 11/23/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h" // Inclusion du .h qui contient les prototypes et structures


int main(int argc, char *argv[])
{
    Coordonnees point; // L'ordinateur comprend qu'il s'agit de "struct Coordonnees" grâce au typedef dans main.h
    point.x = 10;
    point.y = 20;

    Personne joueur1, joueur2; // L'ordinateur comprend qu'il s'agit de "struct Personne" grâce au typedef dans main.h

    printf("Joueur 1 ; Quel est votre nom ?\n");
    scanf("%s", joueur1.nom);
    printf("Votre prenom ?\n");
    scanf("%s", joueur1.prenom);
    printf("Joueur 1; Vous vous appelez %s %s\n", joueur1.prenom, joueur1.nom);

    printf("Joueur 2 ; Quel est votre nom ?\n");
    scanf("%s", joueur2.nom);
    printf("Votre prenom ?\n");
    scanf("%s", joueur2.prenom);
    printf("Joueur 2; Vous vous appelez %s %s\n", joueur2.prenom, joueur2.nom);

    return 0;
}

// Fonctions :


