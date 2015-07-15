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

int main()
{
 ios_base::sync_with_stdio(false);
	ll t,n,i,c;
	cin>>t;
	string s;
	while(t--)
	{
         cin>>n;
         cin>>s;
         int a[n];
         for(i=0;i<n;i++)
         	a[i]=0;
         for(i=0;i<n;i++)
         {
         	if(i==0&&s[i]=='1')
         	{
         		a[i]=1;
         		a[i+1]=1;
         		
         	}
         	else if(i==(n-1)&&s[i]=='1')
         	{
         		a[i]=1;
         		a[i-1]=1;

         	}
         	else if(s[i]=='1')
         	{
         		a[i-1]=1;
				 a[i]=1;
				 a[i+1]=1;
         	}
         	
         }
         c=0;
         for(i=0;i<n;i++)
         {
         	if(a[i]==0)
         		c++;
         }
         cout<<c<<endl;
	}
	return 0;
}



