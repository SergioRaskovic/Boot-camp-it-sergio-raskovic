#include<iostream>

using namespace std;

int main(){
	int a;
	cin>>a;
	int b;
	cin>>b;
	int c;
	int d;
	int e;
	int counter;
	for (int i=0; i<a; i++)
	{	

	 cin>>c>>d;
	 
	 
	 if(c<d <=b){
	 
	 counter+=d;
	 }
	else if(d<c <=b){
	 
	 counter+=c;
	 }
	else if (d<c >b)
	
	{ 
		
		cin>>e;
	
	 counter+=e;
	 }
 	else if (d>c >b)
{
	
	cin>>e; 
	 counter+=e;
	 }

}
cout<< counter;
}
