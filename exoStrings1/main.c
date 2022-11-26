// main.c
//
// Program's name : exoStrings1
//
// Created by David Atlan on 11/23/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype de fonctions


int main(int argc, char *argv[]) { // Équivalent de int main()
    
    /* On crée 2 chaînes. chaine1 doit être assez grande pour accueillir
    le contenu de chaine2 en plus, sinon risque de plantage */
    char chaine1[100] = "Salut ", chaine2[] = "Mateo21";

    strcat(chaine1, chaine2);


    // Si tout s'est bien passé, chaine1 vaut "Salut Mateo21"
    printf("Valeur de chaine1 : %s\n", chaine1);

    // chaine2 n'a pas changé :
    printf("Valeur de chaine2 : %s\n", chaine2);



    return 0;
}

// Fonctions
