#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head;

void Insert(int data){
	Node* node= new Node();
	node->data=data;

	if(head==NULL){
		node->next=head;
		head=node;
		return;
	}

	Node* temp=head;

	while(temp->next!=NULL)
		temp=temp->next;

	node->next= NULL;
	temp->next=node;

}

void palindrome(){
	stack<Node*> s;
	Node* node=head;

	while(node!=NULL){
		s.push(node);
		node=node->next;
	}



	Node* temp=head;
	int t=0;

	
	while(temp!=NULL){
		if(temp->data!=s.top()->data){

			t++;
			
			
		}
		s.pop();
		temp=temp->next;
	}

	if(t==0)
		cout<<"List is a palindrome";
	else
		cout<<"List isn't a palindrome";

		
}



void Print(){
	Node* temp= head;
	while(temp!=NULL){
		cout<<temp->data<<"		";
		temp=temp->next;
	}
}

int main(){
	head=NULL;

	cout<<"Enter the no of elements:  ";
	int m;
	cin>>m;

	for (int i = 0; i < m; ++i)
	{
		int a;
		cout<<"Element: ";
		cin>>a;
		
		Insert(a);
	}

	Print();
	
	palindrome();

}