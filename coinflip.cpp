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
	ll t,g,i,n,q;
	cin>>t;
	while(t--)
	{
      cin>>g;
      while(g--)
      {
      	cin>>i>>n>>q;
      	if(i^q)
      	{
      		if(n%2==0)
      			cout<<n/2<<endl;
      		else
      			cout<<(n/2+1)<<endl;
      	}
      	else
      	{
      		cout<<n/2<<endl;
      	}
      }
	}
	return 0;
}



