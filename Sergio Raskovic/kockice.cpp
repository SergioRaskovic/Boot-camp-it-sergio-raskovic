
#include <iostream>

using namespace std;
int main()
{
	int M,S;
	cin>>M>>S;
	
	if (M <4){
	   M = 7 -M;
        } 
	   
	   
	if (S<4){
	
	   S = 7 - S;
	   }
    
	if (M<S) {
		cout<< "slavko je pobjedio";
	   }
		
	
	else if(M>S) cout << "mirko je pobjedio";
	
	else{
		
		 cout << "neriješeno";
		
	}
	
	

	
	


return 0;

}

