#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int pos,count;
	node *head=new node ();
	head->data=10;
	head->next=NULL;
		node *second=new node();
	second->data=20;
	second->next=NULL;
	head->next=second;
		node *third=new node ();
	third->data=30;
	third->next=NULL;
	head->next=third;
	cout<<"Enter the position: ";
	cin>>pos;
	int i=1;
	node *temp=head;
	if(pos>count)
	{
		cout<<"Invalid position";
	}
	else
	{
		while(i<pos)
	{
	temp=temp->next;
	i++;		
	}
	node*newnode=new node();
	newnode->data=25;
	newnode->next=NULL;
	newnode->next=temp->next;
	temp->next=newnode;
}
temp-head;
while(temp!=NULL)
{
	cout<<temp->data;
	temp=temp->next;
}
}

