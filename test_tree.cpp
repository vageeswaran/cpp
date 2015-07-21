#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map <string, int> msi;
#define mod 1000000007
#define MAX 500
#define fl(i,a,b) for(long long i=a;i<b;i++)
#define fi(i,a,b) for(int i=a;i<b;i++)
struct node
{
	int data;
	node *left;
	node *right;
};
node * neW(int d)
{
	node *n=new node;
	n->data=d;
	n->left=NULL;
	n->right=NULL;
}
void inorder(node *n)
{
	if(n==NULL) return;
	inorder(n->left);
	cout<<n->data;
	inorder(n->right);
}
void mirror(node *n)
{
	if(n==NULL) return ;
	else
	{
		node *temp;
		mirror(n->left);
		mirror(n->right);
		temp=n->right;
		n->right=n->left;
		n->left=temp;
	}
}
int height(node *root)
{
	if(root==NULL) return 0;
	
	return 1+max(height(root->left),height(root->right));
}
bool isBalanced(node *root)
{
	if(root==NULL) return 1;
	
	int lh=height(root->left);
	int lr=height(root->right);
	if(abs(lh-lr)<=1&&isBalanced(root->left)&&isBalanced(root->right))
		return 1;
	return 0;
}
bool ib(node *root,int *height)
{
	int lh=0,rh=0,l=0,r=0;
	if(root==NULL){
		*height=0;
	 return 1;
	}
	l=ib(root->left,&lh);
	r=ib(root->right,&rh);
	*height=(lh>rh?lh:rh)+1;
	if((lh-rh)>=2||(rh-lh)>=2) return 0;
	
	else return l&&r;
}
void printLe(node *root,int level)
{
	if(root==NULL)
		return;
	if(level==1)
		cout<<root->data<<" ";
	else if(level>1)
	{
		printLe(root->right, level-1);
		printLe(root->left, level-1);
    	
	}
}
 
void printGivenLevel(struct node* root, int level, int ltr)
{
    if(root == NULL)
        return;
    if(level == 1)
        cout<<root->data<<" ";
    else if (level > 1)
    {
        if(ltr)
        {
            printGivenLevel(root->left, level-1, ltr);
            printGivenLevel(root->right, level-1, ltr);
        }
        else
        {
            printGivenLevel(root->right, level-1, ltr);
            printGivenLevel(root->left, level-1, ltr);
        }
    }
}

void printSpiral(struct node* root)
{
    int h = height(root);
    int i;
 	bool ltr = true;
    for(i=1; i<=h; i++)
    {
        printGivenLevel(root, i, ltr);
        ltr = !ltr;
    }
}
void Level(node *root)
{
	int h=height(root);
	for(int i=1;i<=h;i++)
		printLe(root,i);
}

int main()
{
 ios_base::sync_with_stdio(false);
 node *root=neW(1);
 root->left=neW(2);
 root->right=neW(3);
 root->left->left=neW(4);
 root->left->right=neW(5);
 //root->right->left = neW(6);
  //root->left->left->left = neW(7);
  
 inorder(root);
 mirror(root);
 cout<<endl;
 inorder(root);
 int height=0;
 if(ib(root,&height))
      cout<<"\nTree is balanced\n";
    else
      cout<<"\nTree is not balanced\n";   
	
	Level(root);
	cout<<endl;
	printSpiral(root);
	
	return 0;
}




