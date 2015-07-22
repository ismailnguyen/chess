#ifndef partieH
#define partieH
#include "echiquier.h"
#include <vcl.h>
//---------------------------------------------------------------------------

class Partie
{
private:
        Echiquier SuiteEchiquier[500];
        int NumDemiCoups;
        int NumCoups;

public:
        Partie();
        void InitialisePartie();
        void ModifieNbCoups(int demicoups);
        void SauvegardeEchiquier(Echiquier EchSource);
        AnsiString VisuEchiquier(int num);

        //m�thodes d'acc�s
        inline int LitNumDemiCoups(){
                return NumDemiCoups;}
        inline char LitTabEchiquier(int ligne, int colonne, int demicoups){
                return SuiteEchiquier[demicoups].LitTabEchiquier(ligne, colonne);}
        inline void ExtraitPosition(Echiquier &EchDestination, int demicoups){
                EchDestination.CopieEchiquier(SuiteEchiquier[demicoups]);}
};

//---------------------------------------------------------------------------
#endif
