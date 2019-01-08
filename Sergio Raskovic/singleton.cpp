#include <iostream>

using namespace std;

class Singleton{
private:
static bool instance_flag;
static Singleton*instance;
Singleton(){
	
}
public:
static Singleton *get_instance();
void my_method();
~Singleton(){
instance_flag = false;
}
};

bool Singleton::instance_flag = false;
Singleton *Singleton::get_instance(){
if(!instance_flag){
instance = new Singleton();
instance_flag = true;
}
return instance;
}

void Singleton :: my_method(){
cout<<"pale sam na svjetu"<<endl;
}

int main(){
	
Singleton *solo = Singleton::get_instance();

solo-> my_method;

cout<<endl;
}
