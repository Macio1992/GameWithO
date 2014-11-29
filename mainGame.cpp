#include <iostream>
#include "game.h"

using namespace std;

void mainGame(char tab[7][7]){
	int poziom, pion, poziom2, pion2;
	
	do{
		cout <<"Podaj pierwsza pozycje pionu:\nPoziom:\n";
		cin >> poziom;
		cout <<"Pion:\n";
		cin >> pion;
	} while(!((poziom >= 1 && poziom <= 7) && (pion >= 1 && pion <= 7)));
	tab[pion-1][poziom-1] = 'P';
	poziom2 = poziom;
	pion2=pion;
	wyswietlPlansze(tab);
	
	wybierzPozycje(tab, poziom, pion, poziom2, pion2);
	
	if(tab[3][3] == 'P' && obliczIloscO(tab) == 1)
		cout <<"WYGRANA!!!! zbito wszystkie o dotarles do kropki!!!!\n";
	else
		cout <<"PRZEGRANA !!!! zbito wszystkie o nie dotarles do kropki!!!!\n";
}
