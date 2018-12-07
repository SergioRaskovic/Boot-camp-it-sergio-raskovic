#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double bolida[15]{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int a = 0, b = 0, i = 0;
	
	for (; i < 15; i++) {
		cin >> bolida[i];
		
		if (bolida[i] == 0) {

			cin >> a;
			cin >> b;
			break;
		}
	}
	cout << double(bolida[i - b + 1]) - bolida[i - a + 1];
}
