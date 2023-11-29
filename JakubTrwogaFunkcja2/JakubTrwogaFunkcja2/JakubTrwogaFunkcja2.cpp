
#include <iostream>
using namespace std;


int Oblicz_premie(int Salary, int Sold) {
	float premia = 0;
	if (Sold < 10000)
		premia = Salary*0.1;
	if (Sold > 10000 && Sold <14999)
		premia = Salary*0.12;
	if (Sold > 15000 && Sold < 17999)
		premia = Salary * 0.14;
	if (Sold > 18000 && Sold < 21999)
		premia = Salary * 0.16;
	if (Sold > 22000)
		premia = Salary * 0.18;
	return premia;
}

int main() {
	//dane do tych dwoch zmiennych sa wycigane z bazy danych,  na rzecz tego wypadku przypisuje je na stale
	int Basic_Salary=4500;
	int Total_Sold=16000;
	int premia = Oblicz_premie(Basic_Salary, Total_Sold);
	cout << premia;
	return 0;
}