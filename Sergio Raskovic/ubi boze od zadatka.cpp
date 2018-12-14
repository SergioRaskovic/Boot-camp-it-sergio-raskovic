#include <iostream>
#include <string>



using namespace std;
struct Node 
{
	int value;
	Node *next;
};


void insertElementFront (Node *&head,int value){
 Node*temp= new Node;
 temp->value=value;
 temp->next=head;
 head=temp;
}
void deleteHead (Node*&head){
Node*temp=head;
if (temp!=0){
	head=temp->next;
	delete temp;
}
}

int element_counter(Node*&head ){
Node*current=head;
int counter=0;

for(int i=0; i<1;){
	
if (current!=0){
	head=current->next;
	counter+=1;
}
else {
	break;
}

}
return counter;
}

int main(){
	Node *head=NULL;
	insertElementFront(head,1);
	insertElementFront(head,2);
	insertElementFront(head,3);
	
 cout << element_counter(head);
	
}
