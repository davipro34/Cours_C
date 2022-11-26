// main.c
//
// Program's name : exoMacros4
//
// Created by David Atlan on 11/23/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAJEUR(age, nom) if (age >= 18) \
                    printf("Bonjour %s, vous etes majeur\n", nom); \
                    else \
                    printf("Bonjour %s, vous etes mineur\n", nom);


int main(int argc, char *argv[])
{
    MAJEUR(19, "Georges")
    
    return 0;
}
