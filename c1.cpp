#include <iostream>
using namespace std;
struct node
{
	int data;
	node* next;
}*head(NULL);
typedef node* lptr;
void insert(int v)
{
	lptr temp=head,nn;
	if(head==NULL)
	{
		head=new (node);
		head->data=v;
		head->next=NULL;
		temp=head;
	}
	else
	{
		while(temp->next!=NULL)temp=temp->next;
		nn=new (node);
		nn->data=v;
		nn->next=NULL;
		temp->next=nn;
	}
}
void print()
{
	lptr temp(head);
	while(temp->next!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<temp->data<<endl;
	temp=temp->next;
}
int main()
{
	int d;
	cout<<"Enter the elements of the linked list.Enter -1 to terminate entries: \n";
	cin>>d;
	while(d!=-1)
	{
	insert(d);
	cin>>d;
	}
	print();
	return 0;
}
