
using namespace std;

int obliczIloscO(char tab[7][7]){
	
	int licznik = 0;
	
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			if(tab[i][j] == 'o')
				licznik++;
		}
	}
	return licznik;
}
