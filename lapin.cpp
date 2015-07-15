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
	ll t,n,i,l,z,sum;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		l=s.length();
		int a[26];
		for(i=0;i<26;i++)
			a[i]=0;
		if(l%2==0)
		{
			z=l/2;
			for(i=0;i<z;i++)
			{
				a[s[i]-'a']++;
			}
			for(i=z;i<l;i++)
			{
				if(a[s[i]-'a']!=0)
					a[s[i]-'a']--;
			}
			sum=0;
			for(i=0;i<26;i++)
			{
				
			   sum+=a[i];
			}
			if(sum==0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else
		{
			z=(l+1)/2;
			for(i=0;i<z-1;i++)
			{
				a[s[i]-'a']++;
			}
			for(i=z;i<l;i++)
			{
				if(a[s[i]-'a']!=0)
					a[s[i]-'a']--;
			}
			sum=0;
			for(i=0;i<26;i++)
			{
				
			   sum+=a[i];
			}
			if(sum==0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
	return 0;
}



