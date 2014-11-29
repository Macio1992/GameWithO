
using namespace std;

bool sprawdzRuch(int poziom, int poziom2, int pion, int pion2){
	
	if(pion - pion2 == 1 && poziom - poziom2 == 0)
		return true;
	else if(pion2 - pion == 0 && poziom2 - poziom == 1)
		return true;
	else if(pion2 - pion == 1 && poziom2 - poziom == 0)
		return true;
	else if(pion - pion2 == 0 && poziom - poziom2 == 1)
		return true;
	else if(poziom == poziom2 && pion == pion2){
		return true;
	}
	else
		return false;
}
