// main.c
//
// Program's name : exoMacros3
//
// Created by David Atlan on 11/23/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAJEUR(age) if (age >= 18) \
                    printf("Vous etes majeur\n"); \
                    else \
                    printf("vous etes mineur\n");


int main(int argc, char *argv[])
{
    MAJEUR(16)
    
    return 0;
}
