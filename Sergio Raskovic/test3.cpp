// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>



using namespace std;

int main()

{
	/*
	int x;
	int y;
	cout << "ispis broja x" << endl;
	cin >> x;
	cout << "ispis broja y" << endl;
	cin >> y;
	cout << "x = " << x;
	cout << "y = " << y;
	cout << "zbroj je" << x + y << endl;
	cout << "razlika je" << x - y << endl;
	cout << "produkt je" << x * y << endl;
	cout << "kvocijent je" << setprecision(2) << fixed<< x / y << endl;

	int a,b,c,d,e,f;
	cout << "veliki broj" << endl;
	cin >> a;

	 b = a / 1000;//znamenka tisucica
	 c = a % 1000 / 100;//znamenka stotica
	 d = a % 1000 % 100;//znamenka desetica
	 e = a;
	 f = d % 10;
	 */

	/*
	int a, b, c;
	cin >> a >> b >> c;
	cout << a << " " << b << " " << c << endl;

	*/
	/*
	string s = "";
	getline(cin, s);
	cout << s << endl; */

	string s1 = "welcome";
	string s2 = "w3resource";

		cout << "velicina stringa s1 je" << s1.size() << endl;
		cout << "velicina stringa s2 je" << s2.size() << endl;

	cout<< "na poziciji 3 "	<< s1.at(3) << endl;
	cout<< "na poziciji 3"  << s2.at(3) << endl;

	cout << s1.empty() << endl;
	cout << s2.empty() << endl;

	cout << s1.substr(3, 4) << endl;
	cout << s2.substr(3, 4) << endl;

	cout << s1.replace(3,4,"went") << endl;

	cout << s1.append("banana") << endl;
	cout << s2.append("banana") << endl;

	cout << s1.insert(3, "jabuka") << endl;
	cout << s2.insert(3, "jabuka") << endl;


	string s = "";
	getline(cin, s);
	cout << s << endl;

	

	
			

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
