// main.c
//
// Program's name : exoTableaux2
//
// Created by David Atlan on 11/17/2022
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { // Équivalent de int main()

int tableau[4], i = 0;

tableau[0] = 10;
tableau[1] = 23;
tableau[2] = 505;
tableau[3] = 8;

for (i = 0; i < 4; i++) {
        printf("%d\n", tableau[i]);
}

        return 0;
}