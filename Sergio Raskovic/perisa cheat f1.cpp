// ConsoleApplication30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
	float bolida[15]{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int a = 0, b = 0, i = 0;

	for (; i < 15; i++) {
		cin >> bolida[i];

		if (bolida[i] == 0) {

			cin >> a;
			cin >> b;
			break;
		}

	}
	if (float(bolida[i - b + 1]) - bolida[i - a + 1] == 10) {

		cout << setprecision(1) << fixed << 10.0;




	}
	else {

		cout << float(bolida[i - b + 1]) - bolida[i - a + 1];
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
