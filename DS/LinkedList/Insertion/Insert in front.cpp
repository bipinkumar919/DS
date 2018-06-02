#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head;
void Insert(int data){
	Node* node=new Node();
	node->data=data;
	node->next=head;
	head=node;
}

void Print(){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"		";
		temp=temp->next;
	}
}

int main(){
	head=NULL;
	

	int m;
	cout<<"Enter the no. of elements to Insert: ";
	cin>>m;
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		Insert(a);
	}

	Print();
}