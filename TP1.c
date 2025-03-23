# include <stdio.h>
# include <stdlib.h>

typedef struct Noeud {
int D;
struct Noeud *Next;
} Noeud;

Noeud* cree(int valeur)
{
Noeud *P;
P=(Noeud*) malloc (sizeof(Noeud));
P-> D=valeur;
P-> Next=NULL;
return P;

}

void affiche(Noeud *head)
{
    Noeud *current=head;
    while(current!=NULL)
    {
        printf("La valeur: %d\n",current->D);
    current=current->Next;
    }

}

Noeud* ajouterD(Noeud *head, int valeur)
{
Noeud *P;
P=(Noeud*) malloc (sizeof(Noeud));
P-> D=valeur;
P-> Next=NULL;
P->Next=head;
head=P;
return head;
}

Noeud* ajouterF(Noeud *head, int valeur) {
   Noeud *P, *current;
   P = (Noeud*) malloc(sizeof(Noeud));
   if (P == NULL) {
       return NULL;
   }
   P->D = valeur;
   P->Next = NULL;

   if (head == NULL) {
       head = P;
   } else {
       current = head;
       while (current->Next != NULL) {
           current = current->Next;
       }
       current->Next = P;
   }

   return head;
}

int taille(Noeud *head)
{
   int cpt=0;
   Noeud *current;
   current=head;
   while (current->Next!=NULL)
   {
       cpt++;
        current = current->Next;
   }
return cpt;
}

Noeud* ajouterF(Noeud *head, int valeur) {
   Noeud *P, *current;
   P = (Noeud*) malloc(sizeof(Noeud));
   if (P == NULL) {
       return NULL;
   }
   P->D = valeur;
   P->Next = NULL;

   if (head == NULL) {
       head = P;
   } else {
       current = head;
       while (current->Next != NULL) {
           current = current->Next;
       }
       current->Next = P;
   }

   return head;
}

int taille(Noeud *head)
{
   int cpt=0;
   Noeud *current;
   current=head;
   while (current->Next!=NULL)
   {
       cpt++;
        current = current->Next;
   }
return cpt;
}