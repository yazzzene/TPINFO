#include <stdio.h>
#include <stdlib.h>

// structure Date

typedef struct Date{
char jour [3];
char mois [3];
char annee [5];
}date;

// structure Produit

typedef struct Produit{
char *Nom_produit;
char Reference[100];
float Montant;
date DateAchat;
}produit;

// structure Liste

typedef struct Liste{
produit cellule;
struct Liste* psuiv;
}liste;

// 1 fonction creer liste produit

liste* Creer_liste_produit(){
  
}
