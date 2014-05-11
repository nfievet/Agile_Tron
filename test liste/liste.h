#ifndef LISTE_H
#define LISTE_H

#include <QPoint>
#include <node.h>

class Liste
{
public:
    //Constructeurs et Destructeurs
    Liste();
    Liste(Liste const& ListeACopier); // Le prototype du constructeur de copie
    ~Liste();
    Liste(int pos[2]);

    //Fonctions li�es � la liste en elle-m�me
    bool push(int pos[2]);//rajoute un �l�ment
    bool delete_top();
    bool top(int pos[2]);//renvoie le premier �l�ment de la liste
    bool pop(int pos[2]);//renvoie et supprime le premier �l�ment de la liste
    bool all_delete();

    //Fonctions li�es � la lecture de la liste
    bool premier();//r�initialise la lecture de la liste en son d�but (Elem revient au d�but de la liste)
    bool suivant();//se place au prochain �l�ment sur la liste (Eleme va au rpochain �l�ment)
    bool getElem(int pos[2]);//renvoie le point o� se trouve le curseur Elem.
    bool getNextElem(int pos[2]);//renvoie le point suivant de l'endroit o� se trouve le curseur Elem.


private:
    Node* Head;
    //se d�place sur la liste et joue le r�le de "cur", mais dans la partie auquel on ne peut pas avoir acc�s dans une classe (private)
    Node* Elem;
};

#endif // LISTE_H
