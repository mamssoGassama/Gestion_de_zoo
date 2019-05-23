#include <iostream>
#include <string>
#include "zoo.h"



using namespace std;



int main()
{
	ZOO z;
	int iChoix;
	bool continuer(true);
	int i;
	bool AGRESSIF;
	string ESPECE;
	string TYPE;
	string nom;
	int capa;
	

	ANIMAUX a;
	while(continuer)
	{
		
		
		iChoix =0;
		do{
		system("pause");
		cout <<"+----------------------------+" << endl;
		cout <<"| 1. Gestion Espace          +" << endl;
		cout <<"| 2. Gestion Animal          +" << endl;
		cout <<"| 9. Quitter                 +" << endl;
		cout <<"+----------------------------+" << endl;
		cin >> iChoix;
		}while( (iChoix != 1 && iChoix != 2) && iChoix != 9);
		
		switch(iChoix) // switch principal
		{
			case 1: // gestion Espace
				{

					do{
					system("pause");
					cout <<"+----------------------------+" << endl;
					cout <<"| 1. Ajouter Espace          +" << endl;
					cout <<"| 2. Suprimer Espace         +" << endl;
					cout <<"| 3. affiche Espace          +" << endl;
					cout <<"| 9. Quitter                 +" << endl;
					cout <<"+----------------------------+" << endl;
					cin >> iChoix;
					}while( (iChoix < 1 || iChoix > 3) && iChoix != 9);
	
					switch(iChoix)
					{
						case 1: //ajouter Espace
							{
								do{
									cout <<"+----------------------------+" << endl;
									cout <<"| 1. Bassin                  +" << endl;
									cout <<"| 2. Enclo                   +" << endl;
									cout <<"| 3. Cage                    +" << endl;
									cout <<"| 9. Quitter                 +" << endl;
									cout <<"+----------------------------+" << endl;
									cin >> iChoix;
								}while( (iChoix < 1 || iChoix > 3) &&  iChoix != 9 );					
								cout << "Nom de l'espace : ";
								cin >> nom;
								do
								{
									cout << "Capacitée maximale de l'espace : ";
									cin >> capa;
									if( capa <= 0)
									{
										cout << "Nombre incorrect" ;
									}
								}while( capa <= 0);
								switch(iChoix)
								{
									case 1 : //Bassin
									{


										z.insertion(1, capa, nom);
									}
									break;
									case 2: //enclos
									{


										z.insertion(2, capa, nom);
									}
									break;
									case 3: //cages
									{	

										z.insertion(3, capa, nom);
									}
									break;
							

								}

								
								
				
				

							}
							break;
						case 2:// suprimer Espace
							
							{	
								
								if(z.card() != 0)
								{
									do
									{
										cout << "Donnez le numero de l'espace a supprimer( -1 pour annuler) : ";
										cin >> iChoix;
									}while(iChoix <-1|| iChoix >= z.card() );
									if( iChoix != -1)
									{
										if( z.getNbAnimaux(iChoix) == 0 )
										{
											z.suppression(iChoix);
										}
										else
										{
											cout << "Veuillez enlever tout les annimaux avant de suprimer l'espace " << endl;
										}
										
									}
								}
								else
								{
									cout<< "Il n'y a aucun espace." << endl;
								}
							}
			
							break;
						case 3: //afficher espace
							{			
								do
								{
								cout << "Donnez le numero de l'espace (-1 pour afficher tout les espace ): ";
								cin >> i;
								if( i <0 || i >= z.card() )
								{
									cout << "Nombre incorrecte"<< endl;
								}
								}while ( i < -1 || i >= z.card() );
								if ( i == -1)
								{
									z.afficherEspace();
								}
								else
								{
									z.afficherUnESPACE(i);
								}
								
	
				

					
							}
							break;
						case 9://quitter
							break;
					}

				}
				break;
			case 2: //Gestion animal
				{
				do{
					cout <<"+----------------------------+" << endl;
					cout <<"| 1. Appeler Barney          +" << endl;
					cout <<"| 2. Suprimer un Animal      +" << endl;
					cout <<"| 3. Liste Occupant          +" << endl;
					cout <<"| 9. Quitter                 +" << endl;
					cout <<"+----------------------------+" << endl;
					cin >> iChoix;
					}while( (iChoix < 1 || iChoix > 3) && iChoix != 9);
				}
				switch(iChoix)
				{
					case 1: //appeler Barney
					{
						do
						{
							cout <<"+----------------------------+" << endl;
							cout <<"| 1. Lion        	     +" << endl;
							cout <<"| 2. Tigre        	     +" << endl;
							cout <<"| 3. Lama        	     +" << endl;
							cout <<"| 4. Faucon        	     +" << endl;
							cout <<"| 5. Martin Pecheur          +" << endl;
							cout <<"| 6. Peroquet      	     +" << endl;
							cout <<"| 7. Requin       	     +" << endl;
							cout <<"| 8. Balene                  +" << endl;
							cout <<"| 9. Otarie       	     +" << endl;
							cout <<"|10. Lapin		     +" << endl;
							cout <<"+----------------------------+" << endl;
							cin >> iChoix;
						}while( iChoix <0 || iChoix > 10);
						switch(iChoix) //  Ce switch permet d'envoyer a la fonction ajoutanimal tout les paramettre neccesaire.
						{
						case 1:
						{
							cout << "Indiquez le nom de l'animal : ";
							cin >> nom;
							AGRESSIF = true;
							ESPECE = "lion";
							TYPE = "Terrestre";
							z.ajoutAnimal(AGRESSIF, ESPECE, nom, TYPE);
						}
						break;
						case 2:
						{
							cout << "Indiquez le nom de l'animal : ";
							cin >> nom;
							AGRESSIF = true;
							ESPECE = "tigre";
							TYPE = "Terrestre";
							z.ajoutAnimal(AGRESSIF, ESPECE, nom, TYPE);
						}
						break;
						case 3:
						{
							cout << "Indiquez le nom de l'animal : ";
							cin >> nom;
							AGRESSIF = false;
							ESPECE = "lama";
							TYPE = "Terrestre";
							z.ajoutAnimal(AGRESSIF, ESPECE, nom, TYPE);					
						}
						break;
						case 4:
						{

							cout << "Indiquez le nom de l'animal : ";
							cin >> nom;
							AGRESSIF = true;
							ESPECE = "faucon";
							TYPE = "Aerien";
							z.ajoutAnimal(AGRESSIF, ESPECE, nom, TYPE);
						}
						break;
						case 5:
						{

							cout << "Indiquez le nom de l'animal : ";
							cin >> nom;
							AGRESSIF = false;
							ESPECE = "martin pecheur";
							TYPE = "Aerien";
							z.ajoutAnimal(AGRESSIF, ESPECE, nom, TYPE);
						}
						break;
						case 6:
						{
							cout << "Indiquez le nom de l'animal : ";
							cin >> nom;
							AGRESSIF = false;
							ESPECE = "peroquet";
							TYPE = "Aerien";
							z.ajoutAnimal(AGRESSIF, ESPECE, nom, TYPE);
						}
						break;
						case 7:
						{

							cout << "Indiquez le nom de l'animal : ";
							cin >> nom;
							AGRESSIF = true;
							ESPECE = "requin";
							TYPE = "Marin";
							z.ajoutAnimal(AGRESSIF, ESPECE, nom, TYPE);
						}
						break;
						case 8:
						{
	
							cout << "Indiquez le nom de l'animal : ";
							cin >> nom;
							AGRESSIF = false;
							ESPECE = "balene";
							TYPE = "Marin";
							z.ajoutAnimal(AGRESSIF, ESPECE, nom, TYPE);
						}
						break;
						case 9:
						{
							cout << "Indiquez le nom de l'animal : ";
							cin >> nom;
							AGRESSIF = false;
							ESPECE = "otarie";
							TYPE = "Marin";
							z.ajoutAnimal(AGRESSIF, ESPECE, nom, TYPE);
						}
						break;
						case 10:
						{

							cout << "Indiquez le nom de l'animal : ";
							cin >> nom;
							AGRESSIF = false;
							ESPECE = "lapin";
							TYPE = "Terrestre";
							z.ajoutAnimal(AGRESSIF, ESPECE, nom, TYPE);

						}
						break;
						}
					
						
						
					}
					break;
					case 2: //suprimer animal
					{
							
						z.SuprimerAnimal();
					}
					break;
					case 3: //afficher Occupant
					{
						z.afficherOccupant();
					}
					break;
					default:
					break;
				}
				break;
			case 9:
				continuer = false;
				
				
				

				
				
				
				break;
		}
	}
	return 0;
}



