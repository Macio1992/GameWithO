
using namespace std;

void wypelnijPlanszeO(char tab[7][7]){
	
	int o;
	
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			tab[i][j] = ' ';
		}
	}
	
	for(int i = 0; i < 7; i++){
		if(i == 2 || i == 3 || i == 4)
			o = 0;
		else
			o = 2;
		for(int j = o; j < 7 - o; j++){
			tab[i][j] = 'o';
		}
	}
	tab[3][3] = '.';
}
