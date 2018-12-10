
#include <iostream>
#include <vector>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h> 
#include <iomanip>
#include <cmath>
#include <string>


using namespace std;
int pare;
int ulog;
int chip;
string ime;

void menu1();
void menu2() ;
void korisnik(int& pare,string&ime,int&ulog);
void novcici(int &chip, int &pare,int&ulog);
void kockica(int &chip);
void slot(int &chip);
// void karte(int &chip);
void menu1(){
	cout<<"pritisnite 1 za upis i unos para"<<endl<<"pritisnite 2 za uplatu cipova"<<endl<<"pritisnite 3 za biranje igrica"<<endl;
	int a;
	cin>>a;
	if (a==1){
		korisnik(pare,ime,ulog);
		menu1();
		
	}
	else if (a==2){
		novcici(chip,pare,ulog);
		menu1();
	}
	
	else if (a==3){
		menu2();
		menu1();
	}
	else if (a==0){
		exit;
	}
	
	
}
void menu2(){
	cout<<"pritisnite 1 za kockice "<<endl<<"pristisnite 2 za slot machine"<<endl;
	int a;
	
	cin>> a;
	if(a==1){
		kockica(chip);
	}
	else if(a==2){
		slot(chip);
	}
 // else if (a==3){
  //	karte(chip);
 // }
		
	
}
void korisnik(int & pare,string&ime )
{

	
	cout << "unesite vase ime " << endl;
	cin >> ime;
	cout << "unesite koliko ce te novaca imati" << endl;
	cin >> pare;


}
void novcici(int &chip,int&pare,int&ulog)
{
     ulog;
	cout<<"unesite koliko para zelite ulozit"<<endl;
   
	cin >> ulog;
	chip = ulog/5;
	if(pare<ulog*5){
		"nemate vise para";
	}

	cout<<"iznos vasih cipova je"<<endl;
	cout<<chip<<endl;
	
	
	
	
}



void kockica(int &chip) {
    system ("cls");
	int a;

	cout << "vas iznos je" << '\t' << chip << endl;
	int player1;
	int player2;

 do{



		srand(time(NULL));


        
		
		player1 = rand() % 6 + 1;
		cout << '\n' << player1 << endl;
		player2 = rand() % 6 + 1;
		cout << '\n' << player2 << endl;
		
	
		
	

		if (player1 > player2) {
			cout << '\n' << "pobjedili ste" << endl;
			chip += 1;
			cout << '\n' << "vas izons je " << '\t' << chip << endl;

		}
		else if (player1 < player2) {

			cout << '\n' << "izgubili ste" << endl;
			chip -= 1;
			cout << '\n' << "vas iznos je" << '\t' << chip << endl;

		}
		else {
			cout << '\n' << "nerjeseno" << endl;

		}
		cout << "pristine 1 za nastavak igre" << endl;
		cout << "pristine 2 za prekid igre" << endl;
		cin >> a;

	
}
while(a==1);{
}
	if(a==2){
		menu1();
	}
}













void slot(int &chip)
{
    system ("cls");

	int korisnik;



	do {
		

		
      
    srand(time(NULL));
    int a=rand() %4+1;
     int b=rand() % 4+1;
     int c=rand()  % 4+1;
     int d=rand()  % 4+1;



		cout << a;
		cout << b;
		cout << c;
		cout << d;
	
		

		if (a == b && a == c && a==d ) {
			chip+= 20;
			cout <<'\n'<< "pobjedili ste" <<'\n'<< chip << endl;
		}
		if  (a == b && a == c){
			chip+=5;
			cout <<'\n'<< "dobili  ste 3 broja" <<'\n'<< chip << endl;
		}
			 
		
		else {
			chip -= 1;
			cout << '\n'<<"igubili ste" <<'\n'<< chip << endl;
		}
		cout << "pritsnite 1 za nastavak" << endl;
		cout << "pritsnite 2 za izlazak" << endl;
		cin >> korisnik;

		
	}

	while (korisnik == 1); {


	}


}
 //void  karte (int&chip){
//	srand(time(NULL));
//	int polje [4][13];
//	for(int i=0; i<13; i++){
//	 for (int j=0; j<4; j++){
//	 	[i][j]rand()%52+1
	
//	cout<<[i][j];
//	 }
//	}
	
	

	
	
//}

//void menu() {
//	int a;
//	cout << "pritisnite 1 za kockice" << endl;
//	cout << "pritisnite 2 za slot" << endl;

//	cin >> a;
//	if (a == 1) {
//		kockica(int pare);
//	}
//	else if (a == 2) {
//		slot(int pare);
//	}


//}
int main()
{
 
  cout << "DOBRODOSLI U CASINO" << endl;
	
   menu1();

	//menu();


	  
	


}
