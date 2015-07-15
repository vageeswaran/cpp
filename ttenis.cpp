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
	ll t,n,c,o,i;
	cin>>t;
	string s;
	while(t--)
	{
		c=0;o=0;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='0')
				o++;
			else
				c++;
		}
		if(c>=o)
			cout<<"WIN\n";
		else
			cout<<"LOSE\n";
	}
	return 0;
}



