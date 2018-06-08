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

void Swap(int x,int y){
	if(x==y)
	return;

		Node* prevX=NULL,*currX=head;

		while(currX && currX->data!=x){
			prevX=currX;
			currX=currX->next;
		}
		Node* prevY=NULL,*currY=head;
		while(currY && currY->data!=y){
			prevY=currY;
			currY=currY->next;
		}


		if(currY==NULL || currX==NULL)
			return;

		if(prevX!=NULL)
			prevX->next=currY;
		else
			head=currY;

		if(prevY!=NULL)
			prevY->next=currX;
		else
			head=currX;

		Node* temp=currY->next;
		currY->next=currX->next;
		currX->next=temp;
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
	
	Swap(2,4);

	Print();

}