/* Copyright (C) 1991-2022 David Atlan.

   This Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	This is my def file for my courses in language C "main.h"
 */


#ifndef DEF_MAIN_H // Si la constante n'a pas été définie le fichier n'a jamais été inclus
#define DEF_MAIN_H // On définit la constante pour que la prochaine fois le fichier ne soit plus inclus

typedef enum Volume Volume;
enum Volume
{
    FAIBLE = 10, MOYEN = 50, FORT = 100
    // A noter : si vous ne précisez pas la valeur d’un élément, elle sera forcément égale à la valeur de l'élément précédent + 1
};





#endif /* main.h */