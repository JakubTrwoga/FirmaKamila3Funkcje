
#include <iostream>
using namespace std;


int Pobierz_dane(){

	int Total_Sold, Advance;

	cout << "Podaj ilosc sprzedazy wykonanych przez pracownika";
	cin >> Total_Sold;
	cout << endl << "Podaj zaliczke pracownika";
	cin >> Advance;

	cout << "pracownik wykonal:" << Total_Sold << " sprzedazy oraz wzial:" << Advance << " zl zaliczki";

	return 0;
}

int main() {
	Pobierz_dane();
	return 0;
}