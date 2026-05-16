#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next;

	//constructor
	Node(int data){
		this->data=data;
		this->next=NULL;
	}

	//destructor
	~Node(){
		int value=this->data;
		//memory free
		if(this->next!=NULL){
			delete next;
			this->next=NULL;
		}
	}
};

void insertAtHead(Node* &head, int data){
	Node *newNode = new Node(data);
	newNode->next=head;
	head = newNode;
}

void insertAtTail(Node* &head, int data){
	Node *newNode= new Node(data);
	if(head==NULL){
		head = newNode;
		return;
	}
	Node *last= head;

	while(last->next !=NULL){
		last=last->next;
	}
	last->next=newNode;
}

void insertAtPosition(Node* &head,int pos, int data){

	if(pos == 1){
        insertAtHead(head, data);
        return;
    }

	Node * temp=head;
	int count=1;
	while(count<pos-1 && temp != NULL){
		temp=temp->next;
		count++;
	}

	if(temp != NULL){
		Node *newNode=new Node(data);
		newNode->next=temp->next;
		temp->next=newNode;
	}
}


void printLL(Node *head){
	Node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	Node *head = NULL; 

    // Insert elements
    insertAtTail(head, 10);
    printLL(head);

    insertAtTail(head, 20);
    printLL(head);
    
    insertAtHead(head, 5);
    printLL(head);

    insertAtPosition(head, 2, 8); // Insert 8 at position 2
    printLL(head);
    
    cout << "Final Linked list: ";
    printLL(head); 

    return 0;
}