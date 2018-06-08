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
void swap(int *a,int* b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

void SwapPairwise(){
	Node* node=head;


	while(node!=NULL && node->next!=NULL){
		swap(&node->data,&node->next->data);
		node=node->next->next;

	}
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

	SwapPairwise();

	Print();


}