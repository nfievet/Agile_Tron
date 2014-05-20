#ifndef GAME_H
#define GAME_H

#include <bike.h>

class Game
{
public:
    Game(int choixNbrJoueurs, bool bonus);
    bool suiteGame(dir keyPress[4]);
    void reinitialise();

    Liste* getMurMoto(int i)const;
    int getNbrJoueurs()const;
    int getScore(int i) const {return motos[i].getScore();}
    bool getPerdu(int i) const {return motos[i].getPerdu();}
    dir getDir(int i) const {return motos[i].get_dir();}
    int getMotoGagnante()const {return motogagnante;}


//private:
    //Verification de collision (3 fcts)
    bool collision(Bike &motoTest, Bike &motoMur);
    bool verifPartielle(int pos1[2],int pos2[2],int cur1[2],int cur2[2]);
    bool entre(int a, int bord1, int bord2);

    int nbrJoueurs;

    vector <Bike> motos; //utilisation d'un vecteur qui permet de gérer automatiquement les pointeur necessaires
                    //pour l'allocation d'un tableau dynamique de Bike

    int posDepart[4][2];
    dir dirDepart[4];
    int vitDepart;
    int motogagnante;
    bool traverseMur;
};

#endif // GAME_H
