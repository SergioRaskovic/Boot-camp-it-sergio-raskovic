// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int N;
	cin >> N;
	int one = N / 1000;
	int two = N % 1000 / 100;
	int three = N / 10 % 10;
	int four = N % 10;
	if (one < 9) {
		one += 1;
	}
	else if (two < 9) {
		two += 1;
	}
	else if (three < 9) {
		three += 1;
	}
	else if (four < 9) {
		four += 1;
	}
	cout << one * 1000 + two * 100 + three * 10 + four;
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
