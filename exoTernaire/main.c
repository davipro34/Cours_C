// main.c
//
// Program's name : exoTernaire
//
// Created by David Atlan on 11/11/2022
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { // Équivalent de int main()

    int majeur = 0;
    int age = 0;
    int autorisation;

    /*
    age = (majeur) ? 18 ; 17;
    printf("%d\n", age);
    */
    /* Ici la condition est tout simplement majeur, mais ça pourrait être n'importe quelle condition plus longue, bien entendu.
    Si oui, alors on met la valeur 18 dans age.
    Sinon (le : signifie else ici), on met la valeur 17 dans age. */


    autorisation = (age >= 18) ? 1 : 0;
    /* Le point d'interrogation permet de dire « est-ce que tu es majeur ? ».
    Si oui, alors on met la valeur 1 dans autorisation.
    Sinon (le : signifie else ici), on met la valeur 0 dans autorisation.
    */

    printf("%d\n", autorisation);
    return 0;
}