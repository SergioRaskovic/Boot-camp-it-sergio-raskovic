// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int godine_1, godine_2;

	cout << "jedna osoba ima" <<endl;
	cin >> godine_1;

	cout << "druga osoba ima"<< endl;
	cin >> godine_2;

	if (godine_1 > godine_2){
		 cout << "prva osoba je starija" << endl;
	 }

	else if (godine_1 == godine_2){
		cout << "osobe imaju isto godina" << endl;
	}


	else {
		cout << "druga osoba je starija" << endl;
	}
	int num;
	cout << "ispis broja" << endl;
	cin >> num;
	if (num % 2 == 0) {
		cout << "broj je paran"<<endl;

	}
	else {
		cout << "broj je neparan" << endl;
	}

	string psw = " banana";
	string usr = "";
	cout << "napisi lozinku";
	cin >> usr;
	if (psw == usr) {
		cout <<"lozinka je dobra" << endl;


	}
	else {
		cout<<"lozinka nije dobra" << endl;

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
