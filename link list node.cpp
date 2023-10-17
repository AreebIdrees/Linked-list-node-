#include<iostream>
using namespace std;

class node{;
public:
int data;
Node*next;
Node(){
data = 0;
next=null;
}

}
int main(){
Node*newNode1=new Node;
newNode1 ->data=10;

Node*newNode1=new Node;
newNode1 ->data=20;

Node*newNode1=new Node;
newNode1 ->data=20;

Node*newNode1=new Node;
newNode1 ->data=30;

Node*newNode1=new Node;
newNode1 ->data=40;

newNode1 ->next = newNode2
newNode1 ->next = newNode3
newNode1 ->next = newNode4

cout<<"Data1" << newNode1 -> data << "self-address1" << newNode1 << "nextaddress" << newNode1 ->next <<endl ;
cout<<"Data2" << newNode2 -> data << "self-address2" << newNode2 << "nextaddress" << newNode2 ->next <<endl ;
cout<<"Data3" << newNode3 -> data << "self-address3" << newNode3 << "nextaddress" << newNode3 ->next <<endl ;

cout << endl;
cout << "Printing through loop" << endl;
cout << endl;


Node*temp =head;
while(temp!=NUll){
	cout<< "data" << temp ->data << "self address :" <<temp << "nextaddress :" << temp->next <<endl;
	temp = temp->next;
	
}
return 0;














}
	

