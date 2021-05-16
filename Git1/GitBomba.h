#pragma once
#include <iostream>

using namespace std;

class GitBomba
{
	int a;
	static const int tabS = 10;
	int tab[tabS] = {0};
public:
	GitBomba(int a): a(a) {}
	int getA() const { return a; }
	void tworzTab();
	
	void showTab() const;
	void strzelaniePociskami(int magazynek) const;
	
};

