// ConsoleApplication31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int a, b, c;
	cout << "Unesite velicine polja: ";
	cin >> a >> b >> c;

	int ***p_p_p_polje = new int**[a];

	for (int i = 0; i < a; i++){
		p_p_p_polje[i] = new int*[b];
		for (int j = 0; j < b; j++) {
			p_p_p_polje[i][j] = new int[c];
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			for (int k = 0; k < c; k++)
			cin>>p_p_p_polje[i][j][k]
				
		
		}
		
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			for (int k = 0; k < c; k++) {
				cout << p_p_p_polje[i][j][k] << "\t";
			}
		}
		cout << endl;
	}
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
