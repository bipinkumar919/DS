#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head;

void Insert(int data, int n){
	Node* node= new Node();
	node->data=data;

	if(n==1){
		node->next=head;
		head=node;
		return;
	}

	Node* temp=head;

	for(int i=1;i<n-1;i++)
		temp=temp->next;

	node->next= temp->next;
	temp->next=node;

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

	cout<<"Enter the element and the position ";
	int m;
	cin>>m;

	for (int i = 0; i < m; ++i)
	{
		int a,b;
		cout<<"Element: ";
		cin>>a;
		cout<<"Position: ";
		cin>>b;
		Insert(a,b);
	}

	Print();
}