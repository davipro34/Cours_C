// main.c
//
// Program's name : exoif
//
// Created by David Atlan on xx/xx/2022
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { // Équivalent de int main()

    int majeur = 1;
    int age = 16;
    int autorisation;

    
/*    if (majeur) {
        age = 18;
    } else {
        age = 17;
    }
*/
//    age = (majeur) ? 18 ; 17;

    autorisation = (age >= 18) ? 1 : 0;

    printf("%d\n", autorisation);
    return 0;
}