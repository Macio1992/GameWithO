#include <iostream>
#include "game.h"

using namespace std;

void wybierzPozycje(char tab[7][7], int poziom, int pion, int poziom2, int pion2){
	
	while(obliczIloscO(tab) != 0 && tab[3][3] != 'P'){
		tab[pion-1][poziom-1] = ' ';
		do{
			do{
				do{
					cout <<"Podaj pozycje pionu:\nPoziom:\n";
					cin >> poziom;
					cout <<"Pion:\n";
					cin >> pion;
				}while(sprawdzRuch(poziom, poziom2, pion, pion2) == false);
			} while((poziom == 4 && pion == 4) && obliczIloscO(tab) != 1);
		} while(!((poziom >= 1 && poziom <= 7) && (pion >= 1 && pion <= 7)));
		tab[pion-1][poziom-1] = 'P';
		poziom2 = poziom;
		pion2 = pion;
		wyswietlPlansze(tab);
	}
	
}
