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
int multiply(int x,int res[],int n)
{
	int carry=0,pr;
	for(int i=0;i<n;i++)
	{
		pr=res[i]*x+carry;
		res[i]=pr%10;
		carry=pr/10;
	}
	while(carry)
	{
		res[n]=carry%10;
		carry/=10;
		n++;
	}
	return n;
}
void factorial(int no)
{
	int res[MAX],n,x,i;
	res[0]=1;
	n=1;
	for(x=2;x<=no;x++)
		n=multiply(x,res,n);
	
	for(i=n-1;i>=0;i--)
		cout<<res[i];
	
	cout<<endl;
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		factorial(n);
	}
	return 0;
}


