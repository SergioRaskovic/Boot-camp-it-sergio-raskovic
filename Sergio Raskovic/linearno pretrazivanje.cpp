// ConsoleApplication40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int broj(int polje[], int velicina, int trazeniBroj);
	

int main()
{


	int polje[10] = { 123, 4, 563, 23, 43, 1, 3, 3, 445, 100 };
	broj(polje, 10, 24);
}
	
	
int broj(int polje[], int velicina, int trazeniBroj) {
	
	for (int i = 0; i < velicina; i++) {
		

			if (polje[i] == trazeniBroj) {
				cout << "pogodili ste broj";

				return i;
			}
			else if (polje[i] < trazeniBroj) {

				cout << "vas broj je veci od trazenog" << endl;
			}
			else if (polje[i] > trazeniBroj) {

				cout << "vas broj je manji od trazenog" << endl;
			}

	}
	
	return-1; 
	
}
	
	


/*
	for (int i = 0; i <= 100; i++) {
		cin >> i;

		ofstream output;
		output.open("Text.txt", ios::out);
		output.close();
 }
	*/


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
