#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;	
};
node *add(node *a,int data)
{
	node *temp=new node;
	temp->val=data;
	temp->next=NULL;
	if(a==NULL)
	{
		a=temp;
	}
	else
	{
		temp->next=a;
		a=temp;
	}
	return a;
}
node * add_l(node *a,int data)
{
	node *temp=new node;
	temp->val=data;
	temp->next=NULL;
	if(a==NULL)
	{
		a=temp;
	}
	else
	{
		node *gl=a;
		while(gl->next!=NULL)
			gl=gl->next;
		gl->next=temp;
		gl=temp;
	}
	return a;
}
node * add_m(node *a,int pos,int data)
{
	node *temp=new node;
	temp->val=data;
	if(pos==0)
	{
		temp->next=a;
		a=temp;
	}
	else
	{
		node *gl=a;
		for(int i=1;i<pos;i++)
			gl=gl->next;
		temp->next=gl->next;
		gl->next=temp;
	}
	return a;
}
void disp(node *a)
{
	node *temp=a;
	while(temp!=NULL)
	{
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
node * reverse(node *a)
{
	node *prev=NULL;
	node *bnext;
	node *cur=a;
	while(cur!=NULL)
	{
		bnext=cur->next;
		cur->next=prev;
		prev=cur;
		cur=bnext;
	}
	a=prev;
	return a;
}
node * del_f(node *a)
{
	if(a==NULL)
		return a;
	else
	{
		node *temp=a;
		a=a->next;
		free(temp);
	}
	return a;
}
node * del_l(node *a)
{
	if(a==NULL)
		return a;
	else
	{
		node *temp=a,*prev;
		while(temp->next!=NULL){
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		free(temp);
	}
	return a;
}
void mid(node *a)
{
	node *fs=a;
	node *sl=a;
	while(fs!=NULL&&fs->next!=NULL)
	{
		fs=fs->next->next;
		sl=sl->next;
	}
	cout<<"Mid element is"<<sl->val<<endl;
}
int count(node *a)
{
	node *fs=a;
	node *sl=a;
	int c=0;
	while(fs!=NULL&&fs->next!=NULL)
	{
		fs=fs->next->next;
		sl=sl->next;
		c+=1;
	}
	if(fs!=NULL)
		return c*2+1;
	return c*2;
}
node * disp_odd_even(node *a)
{
	node *end=a;
	node *prev=NULL;
	node *curr=a;
	while(end->next!=NULL)
		end=end->next;
	
	node *nend=end;
	while(curr->val%2!=0&&curr!=end)
	{
		nend->next=curr;
		curr=curr->next;
		nend->next->next=NULL;
		nend=nend->next;
	}
	if((curr->val)%2==0)
	{
		a=curr;
		while(curr!=end)
		{
			if((curr->val)%2==0)		
			{
				prev=curr;
				curr=curr->next;
			}
			else
			{
				prev->next=curr->next;
				curr->next=NULL;
				nend->next=curr;
				nend=curr;
				curr=prev->next;
			}
		}
	}
	else
		prev=curr;
	
	if (nend!=end && (end->val)%2 != 0)
    {
        prev->next = end->next;
        end->next = NULL;
        nend->next = end;
    }
    return a;
}
int main()
{
	node *head=NULL;
	int ch,data,pos;
	while(1)
	{
		cout<<"\n1.begin\n 2.middle\n 3.end\n 4.display\n 5.reverse\n 6.delete first element\n 7.delete last element\n8.delete any value\n9.middle element\n10.segregate odd even\n11.exit\n enter your choice";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"enter data:";
					cin>>data;
					head=add(head,data);
					break;
			case 2:cout<<"enter the position u want to insert";cin>>pos;
					cout<<"enter data:";
					cin>>data;
					head=add_m(head,pos,data);break;
			case 3:cout<<"enter data:";
					cin>>data;
					head=add_l(head,data);
				break;
			case 4:disp(head);break;
			case 5:head=reverse(head);break;
			case 6:head=del_f(head);break;
			case 7:head=del_l(head);break;
			case 8:break;
			case 9:mid(head);break;
			case 10:head=disp_odd_even(head);break;
			case 11:exit(0);break;
			default:
				cout<<"\nenter btw 1-6\n";
		}
	}
	cout<<count(head);
	return 0;
}

