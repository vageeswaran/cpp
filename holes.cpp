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
	ll t,n,l,i;
	cin>>t;
	char s[100];
	while(t--)
	{
		n=0;
		cin>>s;
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='Q'||s[i]=='R')
				n+=1;
			else if(s[i]=='B')
				n+=2;
		}
		cout<<n<<endl;
	}
	return 0;
}



