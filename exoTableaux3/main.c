// main.c
//
// Program's name : exoTableaux3
//
// Created by David Atlan on 11/17/2022
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { // Équivalent de int main()

int i = 0;
int tableauA[4];


// Initialisation du tableau A (methode 1)
for (i = 0 ; i < 4 ; i++) {
        tableauA[i] = 0;
}
// Affichage des valeurs du tableau A pour vérifier
for (i = 0 ; i < 4 ; i++) {
        printf("Tableau A : A l'adresse memoire %p la valeur est %d\n", &tableauA[i], tableauA[i]);
}

printf("\n");
printf("***********************************\n");

// Initialisation du tableau B (methode 2)
int tableauB[4] = {0, 0, 0, 0}, inc = 0; // Valeurs insérées : 0, 0, 0 et 0
// Affichage des valeurs du tableau B pour vérifier
for (inc = 0 ; inc < 4 ; inc++) {
        printf("Tableau B : A l'adresse memoire %p la valeur est %d\n", &tableauB[inc], tableauB[inc]);
}

printf("\n");
printf("***********************************\n");

// Initialisation du tableau C (methode 3, la plus simple)
int tableauC[4] = {0}, incr = 0; // Valeurs insérées : 0 pour la premiere, quand on ne specifie rien toutes les autres seront automatiquement a 0
// Affichage des valeurs du tableau B pour vérifier
for (incr = 0 ; incr < 4 ; incr++) {
        printf("Tableau C : A l'adresse memoire %p la valeur est %d\n", &tableauC[incr], tableauC[incr]);
}

printf("\n");
printf("***********************************\n");

// Initialisation du tableau D (methode 4)
int tableauD[] = {0, 0, 0, 0}, ip = 0; // le compilateur déduira que le tableau est de taille 4 et les cases seront initialisées en fonction des nombres entre accolades.
// Affichage des valeurs du tableau D pour vérifier
for (ip = 0 ; ip < 4 ; ip++) {
        printf("Tableau D : A l'adresse memoire %p la valeur est %d\n", &tableauD[ip], tableauD[ip]);
}

        return 0;
}