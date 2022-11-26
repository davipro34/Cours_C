// main.c
//
// Program's name : variables
//
// Created by David Atlan on 11/10/2022
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
  int resultat = 0, nombre1 = 0, nombre2 = 0;

  // On demande les nombres un et deux a l'utilisateur : 

  printf("Entrez le nombre 1 : ");
  scanf("%d", &nombre1);

  printf("Entrez le nombre 2 : ");
  scanf("%d", &nombre2);

// On fait le calcul : 
resultat = nombre1 + nombre2;

// Et on affiche l'addition a l'ecran : 
printf ("%d + %d = %d\n", nombre1, nombre2, resultat);
  
  return 0;
}