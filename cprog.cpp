#include <iostream>
using namespace std;
struct node
{
	int data;
	node* lchild;
	node* rchild;
};
typedef node* bstptr;
void create(bstptr &parent,int v)
{
	bstptr temp=parent;
	if (parent==NULL){parent=new (node);parent->lchild=NULL;parent->rchild=NULL;parent->data=v;}
	else
	{
		if(temp->data>v)create(temp->lchild,v);
		else if(temp->data<v)create(temp->rchild,v);
	}
}
void inorder(bstptr temp)
{
	if(temp!=NULL)
	{
		inorder(temp->lchild);
		cout<<temp->data<<" ";
		inorder(temp->rchild);
	}
}
int main()
{
	bstptr A(NULL);
	int d;
	cout<<"Enter the elements of the binary search tree. Enter -1 to terminate.\n";
	cin>>d;
	while(d!=-1)
	{
		create(A,d);
		cin>>d;
	}
	inorder(A);
	return 0;
}