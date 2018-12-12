#include <iostream>
using namespace std;



void insertion(int polje[],int velicina);
int main()
{
		int polje[10]{ 3, 23,11,500,9,8,77,6,15,1 };
	    insertion(polje, 10);
	    	for (int i = 0; i <10;i++) {
		cout << polje[i] << endl;
	}
	}
	
void insertion(int polje[],int velicina){
int temp,i,j;

for(i=0; i<velicina; i++){
temp=polje[i];
for (j=i; j>=1&& polje [j-1] > temp; j--){

polje[j]=polje[j-1];

}
polje[j]=temp;
}
}
