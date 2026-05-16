#include<iostream>
using namespace std;
#include "node.cpp"

int middle_of_ll(Node *head){
	Node *slow= head;
	Node* fast= head;

	while(fast && fast->next){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow->data;

}

int main()
{
	Node n1(10);
	Node *head=&n1;
	Node n2(20);
	Node n3(30);
	Node n4(40);
	Node n5(50);
	
	n1.next=&n2;
	n2.next=&n3;
	n3.next=&n4;
	n4.next=&n5;

	cout<<middle_of_ll(head);

}
