#include "GitBomba.h"

void GitBomba::tworzTab(){

	for(int i = 0; i < tabS; i++){
		cout << "Podaj liczbe: ";
		cin >> tab[i];
	}
}

void GitBomba::showTab() const {
	cout << endl;
	for (int i = 0; i < tabS; i++) {
		cout << tab[i] << endl;
	}
	cout << endl;
}

void GitBomba::strzelaniePociskami(int magazynek) const
{
	for (int i = 0; i < magazynek; i++)
		cout << "Piu" << endl;
}