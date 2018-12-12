#include <iostream>
using namespace std;



void sort(int polje[],int velicina);
int main()
{
		int polje[10]{ 3, 23,11,500,9,8,7,6,15,1 };
	    sort(polje, 10);
	    	for (int i = 0; i <10;i++) {
		cout << polje[i] << endl;
	}
	}


void sort(int polje[],int velicina){
int min,temp,j,i;

	for ( i = 0; i<velicina; i++) {
	min=i;
		for (j=i+1; j<velicina; j++){
		if(polje[j]<polje[min]){
		min=j;
	   }
			
		} 
		temp= polje [i];
		polje[i]=polje[min];
		polje[min]=temp;
		
}
}
	
