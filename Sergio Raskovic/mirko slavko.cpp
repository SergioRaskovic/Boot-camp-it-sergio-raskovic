// ConsoleApplication34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void broj() {



	int a;
	cin >> a;

	ofstream output;
	output.open("ivan_je_najbolji.txt", ios::out);

	for (int i = 0; i < a + 1; i++) {
		output << i << "\t";

	}





	output.close();


}



int main()
{
	string mirko;
	string slavko;
	srand(time(NULL));



	for (int i = 0; i < 2; i++) {



		cout << rand() % 6 + 1 << endl;
	}
	if (rand() % 6 + 1 ) {
		cout << "slavko je pobjedio";
	}
	else {
		cout << "mirko je pobjedio";


	}
}
		


//broj();


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
