#include "pch.h"
#include <iostream>
#include <iomanip>



using namespace std;

int main()

{
	sing float a;
	cin >> a;
	cin >> b;

	cout << (a +=b) << endl;
	cout << (a -=b) << endl;
	cout << (a *= b) << endl;
	cout << (a /= b) << endl;

}