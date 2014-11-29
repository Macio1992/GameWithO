#include <iostream>

using namespace std;

void wyswietlPlansze(char tab[7][7]){
	
	cout <<"\t1 2 3 4 5 6 7\n";
	for(int i = 0; i < 7; i++){
		cout <<i+1<<"\t";
		for(int j = 0; j < 7; j++){
			cout <<tab[i][j]<<" ";
		}
		cout <<"\n";
	}
	
}
