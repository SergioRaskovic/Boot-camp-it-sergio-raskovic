#include <iostream>

using namespace std;

class Banka {

protected:
	int broj;
	int stanjee;
	void set_stanje(int iznos) {
		stanjee = iznos;
	}
	int get_stanje() {
		return stanjee;
	}
	void set_broj(int racun) {
		broj = racun;
	}
	int get_broj() {
		return broj;
	}
public:
	Banka() {
		set_stanje(5000);
		set_broj(1234);
	}
	void uplata() {
		cout << "Koliko zelite uplatiti: ";
		int uplata;
		cin >> uplata;
		set_stanje(get_stanje() + uplata);
	}
	void isplata() {
		cout << "Koliko zelite isplatiti: ";
		int isplata;
		cin >> isplata;
		set_stanje(get_stanje() - isplata);
	}
	void stanje() {
		cout << "Na racunu imate " << get_stanje() << " kn." << endl;
	}
	void broj_racuna() {
		cout << "Broj vaseg racuna" << "\t" << get_broj() << endl;

	}

};


int main()
{
	Banka b;
	b.broj_racuna();
	b.stanje();
	b.uplata();
	b.isplata();
	b.stanje();
	

}
