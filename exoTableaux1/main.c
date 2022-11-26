// main.c
//
// Program's name : exoTableaux1
//
// Created by David Atlan on 11/17/2022
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { // Équivalent de int main()

int tableau[4];

tableau[0] = 10;
tableau[1] = 23;
tableau[2] = 505;
tableau[3] = 8;

printf("%d\n", tableau);
printf("%d\n", &tableau);

printf("%d\n", tableau[0]);
printf("%d\n", *tableau);
printf("%d\n", *(tableau + 1));
printf("%d\n", *(tableau + 2));



        return 0;
}