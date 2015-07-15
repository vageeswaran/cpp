#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *left;
	node *right;
};
node * newNode(int d)
{
	node *no=new node;
	no->data=d;
	no->left=NULL;
	no->right=NULL;
	return (no);
}
void preOrder(node *n)
{
	if(n==NULL)
		return;
	cout<<n->data;
	preOrder(n->left);
	preOrder(n->right);
}
void postOrder(node *n)
{
	if(n==NULL)
		return;
	
	postOrder(n->left);
	postOrder(n->right);
	cout<<n->data;
}
void inOrder(node *n)
{
	if(n==NULL)
		return;
	
	inOrder(n->left);
	cout<<n->data;
	inOrder(n->right);
}
int size(node *n)
{
	if(n==NULL)
		return 0;
	return (size(n->left)+1+size(n->right));
}
int main()
{
	node *root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	cout<<"\npreOrder-->";preOrder(root);
	cout<<"\nInOrder--->";inOrder(root);
	cout<<"\npostOrder--->";postOrder(root);
	cout<<"\nsize--->"<<size(root);
	return 0;
}



