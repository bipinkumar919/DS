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

void Delete(int n){
	Node* node=head;

	if(n==1){
		head=node->next;
		free(node);
		return;
	}

	for (int i = 0; i < n-2; ++i)
		node=node->next;

	Node* temp=node->next;
	node->next=temp->next;
	free(temp);
	return;
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
	cout<<"Enter position of the element to the deleted: ";
	cin>>d;
	Delete(d);

	Print();
}