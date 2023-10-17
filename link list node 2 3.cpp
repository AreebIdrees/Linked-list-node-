#include<iostream>
using namespace  std;

class Node {
public:
int data;
Node*next;
Node(){
data=0;
next =NULL;

}
};
Node *head;
void insertatbeginning(int data){
Node*newNode= new Node;
newNode->data=data;
newNode->next=head;
head=newNode;
}

void disp(){
Node*temp=head;
while(temp!=NULL){

cout<<"data "<<temp->data<<" self address1 "<<temp<<" next address "<<temp->next<<endl;
temp=temp->next; }
}
int main(){

Node*newnode1=new Node;
newnode1->data=10;
Node*newnode2=new Node;
newnode2->data=20;
Node*newnode3=new Node;
newnode3->data=30;
Node*newnode4=new Node;
newnode4->data=40;
newnode1->next=newnode2;
newnode2->next=newnode3;
newnode3->next=newnode4;
head = newnode1;
cout<<"data1 "<< newnode1->data<<"self address 1 "<<newnode1<<"next address "<<newnode1->next<<endl;
cout<<"data2 "<< newnode2->data<<"self address 2 "<<newnode2<<"next address "<< newnode2->next<<endl;
cout<<"data3 "<< newnode3->data<<"self address 3 "<<newnode3<<"next address "<<newnode3->next<<endl;
cout<<"data4 "<< newnode4->data<<"self address 3 "<<newnode4<<"next addres s"<<newnode4->next<<endl;


cout<<endl;
cout<<"printing through loop"<<endl;
cout<<endl;

insertatbeginning(50);
insertatbeginning(60);
disp();
}
