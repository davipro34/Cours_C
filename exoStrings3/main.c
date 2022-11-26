// main.c
//
// Program's name : exoStrings3
//
// Created by David Atlan on 11/23/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype de fonctions


int main(int argc, char *argv[]) { // Équivalent de int main()
    
    char chaine[100];
    int age = 15;

    // On ecrit "Tu as 15 ans" dans chaine
    sprintf(chaine, "Tu as %d ans !", age);

    // On affiche le contenu de chaine pour verifier qu'elle contient bien cela
    printf("%s\n", chaine);

    return 0;
}

// Fonctions
