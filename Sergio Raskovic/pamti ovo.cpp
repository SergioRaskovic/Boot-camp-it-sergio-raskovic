// ConsoleApplication49.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header.h"

using namespace std;

class Covjek {
public:
	int visina;
	int tezina;
	char spol;
	void ispis();
};

void Covjek::ispis() {
	cout << visina << endl;
	cout << tezina << endl;
	cout << spol << endl;
}
int main()
{

	string x = "Marko";
	cout << x << endl;
	Covjek box;
	box.visina = 185;
	box.tezina = 95;
	box.spol = 'M';
	box.ispis();

	Zivotinja z;
	z.ime = "lav";
	z.populacija = 2000;
	z.jelo = "meso";
	z.ispis();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
