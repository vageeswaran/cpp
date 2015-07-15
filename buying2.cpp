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
	ll t,n,x,min,i,a,sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n>>x;
		min=mod;
		for(i=0;i<n;i++)
		{
			cin>>a;
			sum+=a;
			min=min<=a?min:a;
		}
		if(min<=sum%x)
			cout<<"-1\n";
		else
			cout<<sum/x<<endl;
	}
	return 0;
}



