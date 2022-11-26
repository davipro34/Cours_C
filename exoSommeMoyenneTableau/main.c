// main.c
//
// Program's name : exoSommeMoyenneTableau
//
// Created by David Atlan on 11/17/2022
//
#include <stdio.h>
#include <stdlib.h>

// Prototype de fonctions
int sommeTableau(int tableau[], int tailleTableau);
double moyenneTableau(int tableau[], int tailleTableau);

int main(int argc, char *argv[]) { // Équivalent de int main()

    int tableau[6] = {4, 8, 15, 16, 23, 43};
    int tailleTableau = 6;

    int resultatSomme = sommeTableau(tableau, tailleTableau);
    double resultatMoyenne = moyenneTableau(tableau, tailleTableau);

    printf("Le resultat de la somme est : %d\n", resultatSomme);
    printf("Le resultat de la moyenne est : %f\n", resultatMoyenne);


    return 0;
}

// Fonction sommeTableau
int sommeTableau(int tableau[], int tailleTableau) {
    
    int somme = 0;
    for (int i = 0 ; i < tailleTableau ; i++) {
        printf("Avant addition somme est : %d\n", somme);
        somme += tableau[i];
        printf("Apres addition somme est : %d\n", somme);
    }
    return somme;
}

// Fonction moyenneTableau
double moyenneTableau(int tableau[], int tailleTableau) {
    
    int resultatSomme = sommeTableau(tableau, tailleTableau);
    
    double moyenne = 0;
    for (int i = 0 ; i < tailleTableau ; i++) {
        moyenne = (double)resultatSomme / (double)tailleTableau;
    }
    return moyenne;
}
