#include "bassin.h"
#include <string>
#include <iostream>


using namespace std;


void BASSIN::afficher() const
{
	
	cout<< "L'espace est de type BASSIN "<< endl << "le nom est "<<getNom()<<"la taille de l'espace est "<<getCapacite() << endl;// "il y'a " << getTabCapa() <<"animaux " <<endl;

}



bool BASSIN::fonctionTest(ANIMAUX A)
{

	if(A.getTYPE() == "Marin") // si l'animal n'est pas du type Marin, il ne peut être placé
	{
		if(getNbAnimaux() != 0 ) // si aucun animaux est present d'autre vérification sont inutile
		{ 
	
			if (A.getAgressif()) // s'il est agressif on doit vérifié qu'il doit être avec la même espece
			{
				
				if (A.getESPECE() ==  getEspeceTab())
				{
					return(true);
				}		
				else
				{
					cout << "Un animal de type agressif ne peut qu'être placer avec ses congènere" << endl;
					return(false);
				}
			}
			else 
			{
				if(getAgressifTab()) //s'il n'est pas de type agressif on verifie l'agressivité du premier animal dans l'espace
				{
					cout << "Vous ne pouvez pas mettre cet animal dans ce bassin, des animaux de type agressif y sont déjà " << endl;
					return(false);
				}
				else
				{
					return(true);
				}
				
				
			}
		}
		else
		{
			return true;
		}
	}
	else
	{
		cout << "Impossible d'ajouter l'animal car il n'est pas du type Marin" << endl;
		return(false);
	}
	return(false);
}

BASSIN::BASSIN() : ESPACE()
{

	

}

BASSIN::~BASSIN()
{


}
