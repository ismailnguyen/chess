#pragma hdrstop
#include "echiquier.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
Echiquier::Echiquier()
{
        InitEchiquier();
        GrandRoqueNoir = true;
        PetitRoqueNoir = true;
        GrandRoqueBlanc = true;
        PetitRoqueBlanc = true;
}
//---------------------------------------------------------------------------
void Echiquier::InitEchiquier()
{

	TabEchiquier[0][0] = 't'; //association de chaque pi�ces de la 1�re ligne Noire
	TabEchiquier[0][1] = 'c';
	TabEchiquier[0][2] = 'f';
	TabEchiquier[0][3] = 'd';
	TabEchiquier[0][4] = 'r';
	TabEchiquier[0][5] = 'f';
	TabEchiquier[0][6] = 'c';
	TabEchiquier[0][7] = 't';

	TabEchiquier[7][0] = 'T'; //association de chaque pi�ces de la 8�me ligne Blanche
	TabEchiquier[7][1] = 'C';
	TabEchiquier[7][2] = 'F';
	TabEchiquier[7][3] = 'D';
	TabEchiquier[7][4] = 'R';
	TabEchiquier[7][5] = 'F';
	TabEchiquier[7][6] = 'C';
	TabEchiquier[7][7] = 'T';

	for(int i=0; i<=7; i++)
	{
		TabEchiquier[1][i] = 'p'; //association de chaque pions Noire
		TabEchiquier[6][i] = 'P'; //association de chaque pions Blanc
		for(int j=2; j<=5; j++)
		{
			TabEchiquier[j][i] = ' '; //association de chaque cases vides
		}
	}
}
//---------------------------------------------------------------------------
void Echiquier::Joker(char couleur)
{
        if(couleur == 'b')
        {
	        TabEchiquier[0][0] = ' ';
	        TabEchiquier[0][1] = ' ';
	        TabEchiquier[0][2] = ' ';
	        TabEchiquier[0][3] = 'T';
	        TabEchiquier[0][4] = 'r';
	        TabEchiquier[0][5] = 'T';
	        TabEchiquier[0][6] = ' ';
	        TabEchiquier[0][7] = ' ';

	        TabEchiquier[7][0] = ' ';
	        TabEchiquier[7][1] = 'C';
	        TabEchiquier[7][2] = 'F';
	        TabEchiquier[7][3] = 'D';
	        TabEchiquier[7][4] = 'R';
	        TabEchiquier[7][5] = 'F';
	        TabEchiquier[7][6] = 'C';
	        TabEchiquier[7][7] = ' ';

	        for(int i=0; i<=7; i++)
	        {
		        TabEchiquier[1][i] = 'P';
		        TabEchiquier[6][i] = ' ';
		        for(int j=2; j<=5; j++)
			        TabEchiquier[j][i] = ' ';
	        }
        }
        else if(couleur == 'n')
        {
	        TabEchiquier[0][0] = ' ';
	        TabEchiquier[0][1] = 'c';
	        TabEchiquier[0][2] = 'f';
	        TabEchiquier[0][3] = 'd';
	        TabEchiquier[0][4] = 'r';
	        TabEchiquier[0][5] = 'f';
	        TabEchiquier[0][6] = 'c';
	        TabEchiquier[0][7] = ' ';

	        TabEchiquier[7][0] = ' ';
	        TabEchiquier[7][1] = ' ';
	        TabEchiquier[7][2] = ' ';
	        TabEchiquier[7][3] = 't';
	        TabEchiquier[7][4] = 'R';
	        TabEchiquier[7][5] = 't';
	        TabEchiquier[7][6] = ' ';
	        TabEchiquier[7][7] = ' ';

	        for(int i=0; i<=7; i++)
	        {
		        TabEchiquier[1][i] = ' ';
		        TabEchiquier[6][i] = 'p';
		        for(int j=2; j<=5; j++)
			        TabEchiquier[j][i] = ' ';
	        }
        }
}
//---------------------------------------------------------------------------
bool Echiquier::EstUnePieceNoire(int ligne, int colonne)
{
    bool estNoire;

    if((TabEchiquier[ligne][colonne] >= 'a') && (TabEchiquier[ligne][colonne] <= 'z')) //verification de minuscule
    {
        estNoire = true;
    }
    else
    {
        estNoire = false;
    }

    return estNoire;

}
//---------------------------------------------------------------------------
bool Echiquier::EstUnePieceBlanche(int ligne, int colonne)
{
    bool estBlanche;

    if((TabEchiquier[ligne][colonne] >= 'A') && (TabEchiquier[ligne][colonne] <= 'Z')) //verification de Majuscule
    {
		estBlanche = true;
    }
    else
    {
        estBlanche = false;
    }

    return estBlanche;
}
//---------------------------------------------------------------------------
bool Echiquier::EstVide(int ligne, int colonne)
{
    bool estVide;

    if(TabEchiquier[ligne][colonne] == ' ') //si le caract�re dans la cellule correspondante est un espace
    {
        estVide = true; //la case est vide
    }
    else
    {
        estVide = false; //la case est pleine
    }

    return estVide; //on retourne la
}
//---------------------------------------------------------------------------
AnsiString Echiquier::VisuEchiquier()
{
    AnsiString str; //d�claration de la chaine Ansi str

    for(int i=0; i<=7; i++) //lignes
    {
        for(int j=0; j<=7; j++) //colonnes
        {
            str += TabEchiquier[i][j]; //on rajoute la lettre de chaque piece au VisuEchiquier
            str += "\t"; //tabulation entre chaque colonne
        }
        str += "\n"; //saut de ligne apr�s chaque ligne
    }

    return str; //on retourne la chaine Ansi
}
//---------------------------------------------------------------------------
void Echiquier::ModifieEchiquier(char Cpiece, int ligne, int colonne)
{
    TabEchiquier[ligne][colonne] = Cpiece; //on integre la lettre Cpiece � la case du tableau correspondante aux arguments
}
//---------------------------------------------------------------------------
void Echiquier::EffaceEchiquier()
{
    for(int i=0; i<=7; i++) //lignes
    {
        for(int j=0; j<=7; j++) //colonnes
        {
			TabEchiquier[i][j] = ' ';
        }
    }
}
//---------------------------------------------------------------------------
bool Echiquier::DiagonaleLibreEntre2cases(int lignedebut, int colonnedebut, int colonnefin)
{
	bool estLibre;
	
	
	
	return estLibre;
}
//---------------------------------------------------------------------------
bool Echiquier::RangeeLibreEntre2cases(int ligne, int colonnedebut, int colonnefin)
{
	bool estLibre;
	
	
	
	return estLibre;
}
//---------------------------------------------------------------------------
bool Echiquier::ColonneLibreEntre2cases(int lignedebut, int colonne, int lignefin)
{
	bool estLibre;
	
	for(lignedebut; lignedebut<lignefin; lignedebut++)
	{
		//if(LitTabEchiquier(lignedebut, colonne) == ' ')  //pas bon ! retourne un bool�en diff�rent � chaque lignedebut incr�ment� !
	}
	
	return estLibre;
}
//---------------------------------------------------------------------------
void Echiquier::CopieEchiquier(Echiquier EchSource)
{
        for(int i=0; i<=7; i++) //r�cup�ration de toute les lignes
        {
                for(int j=0; j<=7; j++) //r�cup�ration de toute les colonnes
                {
                        TabEchiquier[i][j] = EchSource.LitTabEchiquier(i, j); //on lit chaque lettre du tableau de l'�chiquier source qu'on copie dans chaque case du tableau TabEchiquier
                }
        }
}
//---------------------------------------------------------------------------
bool Echiquier::DeplacementPossible(int idep, int jdep, int iarr, int jarr)
{
        char z = this->TabEchiquier[idep][jdep];
        switch(z)
        {
         case 'p':
         case 'P': this->MonPion.CalculPositionArrivee(idep, jdep, this);
                return this->MonPion.ValidePositionArrivee(iarr, jarr);
         case 'c':
         case 'C': this->MonCavalier.CalculPositionArrivee(idep, jdep, this);
                return this->MonCavalier.ValidePositionArrivee(iarr, jarr);
         case 'f':
         case 'F': this->MonFou.CalculPositionArrivee(idep, jdep, this);
                return this->MonFou.ValidePositionArrivee(iarr, jarr);
         case 't':
         case 'T': this->MaTour.CalculPositionArrivee(idep, jdep, this);
                return this->MaTour.ValidePositionArrivee(iarr, jarr);
         case 'd':
         case 'D': this->MaDame.CalculPositionArrivee(idep, jdep, this);
                return this->MaDame.ValidePositionArrivee(iarr, jarr);
         case 'r':
         case 'R': this->MonRoi.CalculPositionArrivee(idep, jdep, this);
                return this->MonRoi.ValidePositionArrivee(iarr, jarr);
         default: return false;
        }
}
//---------------------------------------------------------------------------
bool Echiquier::RoiPAT(bool couleur)
{

}
//---------------------------------------------------------------------------
bool Echiquier::CaseEnEchec(int ligne, int colonne, bool couleur)
{
        for(int i=0; i<8; i++)
                for(int j=0; j<8; j++)
                        if((((!couleur) && EstUnePieceNoire(i, j)) || ((couleur) && EstUnePieceBlanche(i, j)))
                        && (DeplacementPossible(i, j, ligne, colonne)))
                                return true;
        return false;
}
//---------------------------------------------------------------------------
bool Echiquier::RoiEnEchec(bool couleur)
{
        for(int i=0; i<8; i++)
                for(int j=0; j<8; j++)
                        if(((LitTabEchiquier(i, j) == 'R') && (!couleur))
                        || ((LitTabEchiquier(i, j) == 'r') && (couleur)))
                                return CaseEnEchec(i, j, couleur);
}
//---------------------------------------------------------------------------
