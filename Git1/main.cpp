#include "GitBomba.h"

int main()
{
	GitBomba Aa(10);
	cout << Aa.getA() << endl;

	// -------------------------------------
	Aa.showTab();
	Aa.tworzTab();
	Aa.showTab();
	return 0;
}