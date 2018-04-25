#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

 
using namespace std;
 
struct Node{
	int data;
	Node* left,*right;
};

Node* newNode(int data){
	Node* node=new Node();
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}


void Inorder(Node* node){
	if(node!=NULL){
		Inorder(node->left);
		cout<<node->data<<endl;
		Inorder(node->right);
	}
}

Node* Insert(Node* node,int key){
	if(node==NULL)
		return newNode(key);

	if(key<node->data)
		node->left=Insert(node->left,key);
	else
		node->right=Insert(node->right,key);

	return node;
}

Node* minValueNode(Node* node){
	Node* curr=node;
	while(curr->left!=NULL)
		curr=curr->left;

	return curr;
}

Node* Delete(Node* node, int key){
	if(node==NULL)
		return node;

	if(key<node->data)
		node->left=Delete(node->left,key);
	else if(key>node->data)
		node->right=Delete(node->right,key);
	else{
		if(node->left==NULL){
			Node* temp=node->right;
			free(node);
			return temp;
		}
		else if(node->right==NULL){
			Node* temp=node->left;
			free(node);
			return temp;
		}

		Node* temp=minValueNode(node->right);
		node->data=temp->data;
		node->right=Delete(node->right,temp->data);
	}

	return node;
}

int main(){
	Node* root=NULL;
	root=Insert(root,50);
	root=Insert(root,30);
	root=Insert(root,20);
	root=Insert(root,40);
	root=Insert(root,70);
	root=Insert(root,60);
	root=Insert(root,80);

	Inorder(root);
	root=Delete(root,20);
	cout<<"Modified Tree\n";
	Inorder(root);
	root=Delete(root,30);
	cout<<"Modified tree\n";
	Inorder(root);
	root=Delete(root,50);
	cout<<"Modified tree\n";
	Inorder(root);


}