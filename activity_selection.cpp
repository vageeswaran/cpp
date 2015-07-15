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
	int t,n,i,j,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll s,f;
		c=1;
		vii v;
		for(i=0;i<n;i++)
		{
			cin>>s>>f;
			v.push_back(make_pair(f,s));
		}
		sort(v.begin(),v.end());
		i=0;
		for(j=1;j<n;j++)
		{
			if(v[j].second>v[i].first)
			{
				c++;
				i=j;
			}
		}
		cout<<c<<endl;
		v.clear();
	}
	return 0;
}



