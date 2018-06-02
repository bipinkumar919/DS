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

void Delete(int data){
	Node* temp=head, * prev;
	if(temp!=NULL && temp->data==data){
		head=temp->next;
		free(temp);
		return;

	}

	while(temp!=NULL && temp->data!=data){
		prev=temp;
		temp=temp->next;
	}

	if(temp==NULL)
		return;

	prev->next=temp->next;
	free(temp);
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

	int d;
	cout<<"Enter element to the deleted: ";
	cin>>d;
	Delete(d);

	Print();
}