#include "GitBomba.h"

int main()
{
	GitBomba Aa(10);
	cout << Aa.getA() << endl;

	// -------------------------------------
	Aa.showTab();
	Aa.tworzTab();
	Aa.showTab();

	GitBomba* git = new GitBomba(5);
	git->showTab();
	delete git;
	//buziaczki z feature'a
	return 0;
}