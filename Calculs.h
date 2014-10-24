#ifndef CALCULS_h
#define CALCULS_h

Matrice SommeMatrice(Matrice M1, Matrice M2);
Matrice MultiplicationMatrice(Matrice M1, Matrice M2);
Matrice Division(Matrice M1, Matrice M2);
float ProduitScalaire(Matrice M1, Matrice M2);

Matrice MultiplicationMatriceScalaire(Matrice M1, float Scalaire);
Matrice DivisionMatriceScalaire(Matrice M1, float Scalaire);

#endif