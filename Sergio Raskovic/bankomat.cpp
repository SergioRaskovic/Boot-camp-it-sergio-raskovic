// ConsoleApplication54.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

class Banka {

private:
	int stanje;
	void set_stanje(int iznos) {
		stanje = iznos;
	}
	int get_stanje() {
		return stanje;
	}
public:
	Banka() {
		set_stanje(5000);
	}
	void uplata() {
		cout << "Koliko zelite uplatiti: ";
		int uplata;
		cin >> uplata;
		set_stanje(get_stanje() + uplata);
	}
	void isplata() {
		cout << "Koliko zelite isplatiti: ";
		int isplata;
		cin >> isplata;
		set_stanje(get_stanje() - isplata);
	}
	void stanje() {
		cout << "Na racunu imate " << get_stanje() << " kn." << endl;
	}

};


int main()
{
	Banka b;
	b.stanje();
	b.uplata();
	b.isplata();
	b.stanje();
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

