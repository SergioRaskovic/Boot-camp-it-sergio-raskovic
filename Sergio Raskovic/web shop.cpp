// ConsoleApplication58.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std; 

class Proizvod {
protected:
	int id;
	string naziv;
	double cijena;
	int kolicina;
public:
	Proizvod(){

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
			cout << proizvod1[i].id << endl;
			cout << proizvod1[i].cijena << endl;
			cout << proizvod1[i].kolicina << endl;
			cout << proizvod1[i].naziv << endl;
			
			

		}
		

	}
	
};

class Korisnik {
protected:
	string ime;
	string prezime;
	string mail;
	string username;
	string password;
public:
	Korisnik() {

	}

	void registracija() {
		


		ifstream myfile;
		myfile.open("Podaci.txt");
		vector<Korisnik>korisnik1;
		while (!myfile.eof())
		{
			Korisnik p;
			myfile >> p.ime >> p.prezime >> p.mail >> p.username >> p.password;

			korisnik1.push_back(p);

			myfile.close();
			cout << "unesite vase ime" << endl;
			cin >> ime;
			cout << "unesite vase prezime" << endl;
			cin >> prezime;
			cout << "unesite vas mail" << endl;
			cin >> mail;
			cout << "unesite vas username" << endl;
			cin >> username;

			for (int i = 0; i < korisnik1.size(); i++) {
				if (username == p.username) {
					cout << "username vec postoji" << endl;
				}
			}

			cout << "unesite vas password" << endl;
			cin >> password;

		}
		ofstream output;
		output.open("Podaci.txt", ios::out | ios::app);


		output << ime + " " + prezime + " " + mail + " " + username + " " + password + "\n";
		output.close();



		
	}





	void prijava() {

		string username;
		string password;

		cout << "unesite vas username" << endl;
		cin >> username;
		cout << "unesite vas password" << endl;
		cin >> password;

	}
};




int main()
{
	cout << "Dobrodosli u web shop Smokey " << endl;

	Korisnik a;

		a.registracija();
		
		/*Proizvod p;
		p.proizvodi();
		*/



}