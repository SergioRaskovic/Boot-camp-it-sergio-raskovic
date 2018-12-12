#include <iostream>

using namespace std;

void bubble(int polje[], int velicina);





int main()
{
	int polje[10]{ 3, 23,11,500,9,8,7,6,15,1 };
	bubble(polje, 10);
	for (int i = 0; i < 10; i++) {
		cout << polje[i] << endl;
	}
}

void bubble(int polje[], int velicina) {
	int temp, j;
	bool zamjena = true;
	for (int i = 0; zamjena == true; i++) {
		zamjena = false;
		for (j = 0; j < velicina - 1 -i; j++) {
			if (polje[j] > polje[j + 1]) {
				temp = polje[j];
				polje[j] = polje[j + 1];
				polje[j + 1] = temp;
				zamjena = true;
		}
		
	}

	}
}
