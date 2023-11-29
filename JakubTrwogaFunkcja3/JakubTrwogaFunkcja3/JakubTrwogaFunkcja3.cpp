
#include <iostream>
using namespace std;



int Oblicz_wyplate(int Basic, int Advance, int premia) {
	int Final=0;
	if (Basic > 0) {
		Final = Basic +premia - Advance;
	}
	else {
		//wyplata pracownika jest ujemna
	}
	return Final;
}

int main() {
	//zmienne powinny byc wypelniane danymi z bazydanych, na ten moment przypisuje je na stale
	int Basic_Salary = 4500;
	int Advance = 2000;
	int premia = 630;
	int Final_Salary = Oblicz_wyplate(Basic_Salary, Advance, premia);

	if (Final_Salary > 0)
		cout << "wyplata koncowa wynosi:" << Final_Salary;
	else
		cout << "niestety wyplata po odjeciu zaliczek jest ujemna";
	return 0;

}