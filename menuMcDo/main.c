// main.c
//
// Program's name : menuMcDo
//
// Created by David Atlan on 11/11/2022
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main() {

    int choixMenu;

    printf("=== Menu === \n");
    printf("1. Royal Cheese \n");
    printf("2. Mc Deluxe \n");
    printf("3. Mc Bacon \n");
    printf("4. Big Mac \n");
    printf("Quel est votre choix : \n");

    scanf("%d", &choixMenu);

    switch (choixMenu)
    {
        case 1:
            printf("Vous avez choisi le menu Royal Cheese !\n");
            break;
        case 2:
            printf("Vous avez choisi le menu Mc Deluxe !\n");
            break;
        case 3:
            printf("Vous avez choisi le menu Mc Bacon !\n");
            break;
        case 4:
            printf("Vous avez choisi le menu Big Mac !\n");
    
        default:
            printf("Je n'ai pas compris votre choix !\n");
            break;
    }
    return 0;
}