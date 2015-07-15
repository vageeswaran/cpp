#include<bits/stdc++.h>
using namespace std;
struct node
{
	int a;
	struct node *next;
}*head,*gl;
void reverse(int k)
{
	node *temp=new node;
	gl=head->next;
	node *prev=new node;
	prev=NULL;
	node *next;
	for()
	{
		next=gl->next;
		gl->next=prev;
		prev=gl;
		gl=next;
	}	
	head->next=prev;
}
void reverse()
{
	node *temp=new node;
	gl=head->next;
	node *prev=new node;
	prev=NULL;
	node *next;
	while(gl!=NULL)
	{
		next=gl->next;
		gl->next=prev;
		prev=gl;
		gl=next;
	}	
	head->next=prev;
}
void add_begin(int x)
{
	
	gl=new node;
	gl->a=x;
	gl->next=head->next;
	head->next=gl;
}
void add_middle(int x,int y)
{
	gl=new node;
	node *fl=new node;
	node *temp=new node;
	gl=head->next;
	while(gl!=NULL)
	{
		temp=gl;
		if(gl->a==y)
			break;
		gl=gl->next;
	}
	fl->a=x;
	fl->next=temp->next;
	temp->next=fl;
}
void add_last(int x)
{
	gl=new node;
	node *temp=new node;
	gl=head->next;
	if(gl==NULL)
	{
		gl=new node;
	gl->a=x;
	gl->next=head->next;
	head->next=gl;
	}
	else{
	
	while(gl->next!=NULL)
	{
		
		gl=gl->next;
	}
	temp->a=x;
	temp->next=NULL;
	gl->next=temp;
}
}
void display()
{
	gl=new node;
	gl=head->next;
	cout<<"\n##################################################\n";
	cout<<"LIST IS \n";
	while(gl!=NULL)
	{
		cout<<gl->a<<"->";
		gl=gl->next;
	}
	cout<<"\n##################################################\n";
}
int main()
{
	head=new node;
	head->next=NULL;
	int n, x,y;
	while(1){
	
	cout<<"\n1.begining\n";
	cout<<"2.end\n";
	cout<<"3.middle\n";
	cout<<"4display\n";
	cout<<"5.reverse\n";
	cout<<"6.reverse\n";
	cout<<"7.exit\n";
	cout<<"enter you choice\n";
	cin>>n;
	switch(n)
	{
		case 1:cout<<"\nenter value to insert";
				cin>>x;
				add_begin(x);
				break;
		case 2:cout<<"\nenter value to insert";
				cin>>x;
				add_last(x);
				break;
		case 3: cout<<"\nenter value to insert";
				cin>>x;
				cout<<"\nenter value to after which to insert";
				cin>>y;
				add_middle(x,y);
				break;
		case 4:display();
			break;
		case 5:reverse();break;
		case 5:int k;cin>>k;reversek(k);break;
		case 7: exit(0);
		break;
		default:cout<<"enter 1-4";
	}
}
	
	return 0;
}



