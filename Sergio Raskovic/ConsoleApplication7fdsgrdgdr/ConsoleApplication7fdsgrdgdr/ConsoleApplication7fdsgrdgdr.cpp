#include "pch.h"
#include <iostream>
#include <iomanip>




using namespace std;
int main() {
	//sljeme
	float S = 0;
	//aspen
	float A = 0;
	//rezulat
	float R = 0;
	cin >> S;
	cin >> A;
	//preracunavamo temperaturu na sljemenu u fahrenheite
	S = S * 9 / 5 + 32;
	
	cout << S << endl;
	cout << A << endl;
	//razlika u temperaturi izmedu dvije planine u fahrenheitima
	R = abs(S - A);

	cout << R << endl;

	
	


}