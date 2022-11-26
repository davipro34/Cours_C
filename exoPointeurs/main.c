// main.c
//
// Program's name : exoPointeurs
//
// Created by David Atlan on 11/17/2022
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { // Équivalent de int main()

int age = 10;
int *pointeurSurAge = &age;

int *monPointeur = NULL;

printf("La variable age vaut : %d\n", age);
printf("L'adresse hexadecimale de la variable age est : %p\n", &age);
printf("L'adresse decimale de la variable age est : %d\n\n", &age);
printf("****************\n\n\n");
printf("La valeur du pointeur pointeurSurAge est : %d\n\n", pointeurSurAge);
printf("La valeur de age en pointant sur pointeurSurAge : %d\n\n", *pointeurSurAge);

        return 0;
}