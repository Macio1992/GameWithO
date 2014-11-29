#include <iostream>
#include "game.h"

using namespace std;

int main(){
	
	char plansza[7][7];
	
	wypelnijPlanszeO(plansza);
	wyswietlPlansze(plansza);
	mainGame(plansza);
	
	return 0;
}
