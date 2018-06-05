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
int DetectLoop(){
	Node* node=head,*dnode=head;

	while(node && dnode && dnode->next){
		node=node->next;
		dnode=dnode->next->next;

		if(node==dnode){
			
			return 1;
		}
		

	}
	return 0;
	
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
	head->next->next->next->next->next=head;

	if(DetectLoop())
		cout<<"Loop detected";
	else
		cout<<"No loop found";


}