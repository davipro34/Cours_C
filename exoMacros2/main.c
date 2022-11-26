// main.c
//
// Program's name : exoMacros2
//
// Created by David Atlan on 11/23/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// il est possible de mettre plusieurs lignes de code à la fois. Il suffit de placer un \ avant chaque nouvelle ligne
#define RACONTER_SA_VIE()   printf("Coucou, je m'appelle Brice\n"); \
                            printf("J'habite a Nice\n"); \
                            printf("J'aime la glisse\n");


int main(int argc, char *argv[])
{
    RACONTER_SA_VIE()
    
    return 0;
}
