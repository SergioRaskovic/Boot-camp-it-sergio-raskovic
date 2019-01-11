// ConsoleApplication58.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Proizvod {
protected:
	int id;
	string naziv;
	double cijena;
	int kolicina;
public:
	Proizvod() {

	}

	void proizvodi() {

		ifstream myfile;
		myfile.open("Proizvodi.txt");
		vector<Proizvod> proizvod1;

		while (!myfile.eof())
		{
			Proizvod p;
			myfile >> p.id >> p.naziv >> p.cijena >> p.kolicina;

			proizvod1.push_back(p);
		}
		myfile.close();
		for (int i = 0; i < proizvod1.size(); i++) {

			cout << proizvod1[i].naziv << "\t";
			cout << proizvod1[i].cijena << "kn" << endl;
			

		}
	}
};

class Korisnik {
private:
	string ime;
	string prezime;
	string mail;
	string username;
	string password;
	bool logged_in = false;
	int balans;
	static vector <Korisnik> korisnik1;
public:

	static void napuni_korisnike() {
		ifstream myfile;
		myfile.open("Podaci.txt");
		Korisnik p;
		while (myfile) {
			myfile >> p.ime >> p.prezime >> p.mail >> p.username >> p.password >> p.balans;
			korisnik1.push_back(p);
		}
		myfile.close();
	}


	static void registracija() {
		Korisnik k;

		
			srand(time(NULL));
			cout << "unesite vase ime" << endl;
			cin >> k.ime;

			cout << "unesite vase prezime" << endl;
			cin >> k.prezime;

			cout << "unesite vas mail" << endl;
			cin >> k.mail;

				for (int i = 0; i < korisnik1.size(); i++) {
					while (korisnik1[i].mail == k.mail) {
						cout << "Vec postoji korisnik s tim mailom!" << endl;
						cin >> k.mail;
					}
				}
			
			 	cout << "unesite vas username" << endl;
				cin >> k.username;

				for (int i = 0; i < korisnik1.size(); i++) {
					while (korisnik1[i].username == k.username) {
						cout << "Vec postoji korisnik s tim usernameom!" << endl;
						cin >> k.username;
					}
				}
			

			cout << "unesite vas password" << endl;
			cin >> k.password;

			k.balans = rand() % 10000;

			korisnik1.push_back(k);

			ofstream myfile;
			myfile.open("Podaci.txt", ios::out | ios::app);
			for (int i = 0; i < korisnik1.size(); i++) {
				myfile << korisnik1[i].ime << " " << korisnik1[i].prezime << " " << korisnik1[i].mail << " " << korisnik1[i].username << " " << korisnik1[i].password << " " << korisnik1[i].balans << "\n";
			}
			myfile.close();
	};

	void prijava() {

		Korisnik k;

		cout << "unesite vas username" << endl;
		cin >> k.username;
		cout << "unesite vas password" << endl;
		cin >> k.password;

		for (int i = 0; i < korisnik1.size(); i++) {

			if (korisnik1[i].username == k.username && korisnik1[i].password == k.password) {
				cout << "Dobrodosli  natrag " << '\t' << k.username << endl;
				break;

			}
			while (korisnik1[i].username != k.username && korisnik1[i].password != k.password) {
				cout << "upisali ste krivi username ili password" << endl;
				cout << "unesite vas username" << endl;
				cin >> k.username;
				cout << "unesite vas password" << endl;
				cin >> k.password;
			}

			
		

		}
		
	}
};


vector <Korisnik> Korisnik::korisnik1;

int main()
{
	

	Korisnik::napuni_korisnike();

	cout << "Dobrodosli u web shop Smokey " << endl;

	Korisnik a;
	Proizvod p;

	cout << "da li se zelite registrati ili prijaviti" <<"\n "<< "1.prijava " << "\n " << "2.registracija"  << "\n " <<  "3.pregled itema u shopu" << "\n " << endl;
	
	int x;
	cin >> x;
	if (x == 1) {
		system("cls");
		a.prijava();

	}
	else if (x == 2) {
		system("cls");
		a.registracija();
		}
	else if (x == 3) {
		system("cls");
		p.proizvodi(); 
	}

	

	

	
	





	
	


	return 0;
}