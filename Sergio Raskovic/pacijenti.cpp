// ConsoleApplication48.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>


using namespace std;

struct pacijent {
	int MBO;
	string ime;
	string prezime;
	vector<string> lijekovi;
};


void unos(vector <pacijent> &pac) {
	pacijent psihopat;

	cout << "molimo vas da uneste vas MBO" << endl;
	cin >> psihopat.MBO;
	if (psihopat.MBO == psihopat.MBO) {
		cout << "korisnik vec postoji" << endl;
		unos(pac);
	}

	
	cout << "molimo vas da uneste vase ime" << endl;
	cin >> psihopat.ime;
	cout << "molimo vas da uneste vase prezime" << endl;
	cin >> psihopat.prezime;
	cout << "unesite koliko lijekova koristite" << endl;
	int a;
	cin >> a;
	int brojac = 0;
	while (brojac < a) {
		cout << "ispisite vase lijekove" << endl;
		string b;
		cin >> b;
		psihopat.lijekovi.push_back(b);
		brojac++;
	}
	pac.push_back(psihopat);


}
void ispis(vector <pacijent> pac) {
	ofstream output;
	output.open("spremi.txt", ios::out | ios::app);
	for (int i = 0; i < pac.size(); i++) {
		output << pac[i].MBO << endl << pac[i].ime << endl << pac[i].prezime << endl;

		for (int j = 0; j < pac[i].lijekovi.size(); j++) {
			output << pac[i].lijekovi[j] << endl;
		}
	}


	system("PAUSE");
	output.close();

}

int main()
{
	vector <pacijent> pac;


	int izbor;


	do {

		system("cls");
		cout << "Unesite vas izbor: ";
		cin >> izbor;
		switch (izbor) {
		case 1: unos(pac); break;
		case 2: ispis(pac); break;
		case 0: break;
		default:
			cout << "Unesite valjani izbor!" << endl;

		}
	} while (izbor != 0);

	return 0;
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
