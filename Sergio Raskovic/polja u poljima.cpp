// ConsoleApplication22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
	/*
	int polje[10][10];
	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {
			polje[i-1][j-1]= i * j * 3; 
		}
		
   }
	for (int i = 1; i < 11; i++) {

		for (int j = 1; j < 11; j++) {
			cout << polje[i-1][j-1] << '\t';
		}
		cout << endl;
	}
	
	int polje2[2][2][2];
	int i, j, k;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cin >> i >> j >> k;



			}
		}
	}
		for (int i = 0; i < 2; i++) {
	
			for (int j = 0; j < 2; j++) {

				for (int k = 0; k < 2; k++) {
					cout << polje2<<i<<j<<k << endl;

				}
			}
	}
		cout <<   endl;
		*/

	vector <vector <int>> v;
	int x;

	for (int i = 0; i < 2; i++) {
		vector <int> temp;
		for (int j = 0; j < 2; j++) {
			cin >> x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << v[i][j] << "\t";
		}
	}

		
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
