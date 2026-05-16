#include<iostream>
using namespace std;
#include "node.cpp"

void print_linkedlist(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

Node *InsertatFirst(Node* head,int value){
	Node *first = new Node(value);

	first->next=head;
	head=first;
	return head;
}

Node *insertAtEnd(Node *tail,int value){
	Node *temp= new Node(value);
	tail->next=temp;
	tail=temp;
}


int main()
{
	Node * head = NULL; // head of the LinkedList
	head = InsertatFirst(head,40);
	head = InsertatFirst(head,30);
	head = InsertatFirst(head,20);
	head = InsertatFirst(head,10); 
	cout << "LinkedList before inserting 0 at beginning : " << endl;
	print_linkedlist(head);

	head = InsertatFirst(head,75);
  	cout << "LinkedList after inserting 0 at beginning : " << endl;
	print_linkedlist(head);

}