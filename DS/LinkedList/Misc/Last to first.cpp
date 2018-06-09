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



void Print(){
	Node* temp= head;
	while(temp!=NULL){
		cout<<temp->data<<"		";
		temp=temp->next;
	}
}

void LastToFirst(){
	Node* node=head,*temp=NULL;
	int n=0;

	while(node->next!=NULL){
		temp=node;
		node=node->next;
	}
	temp->next=NULL;


	node->next=head;
	head=node;

	


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
	
	LastToFirst();

	Print();

	

}