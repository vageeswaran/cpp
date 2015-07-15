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


bool chk(string str1,string str2, int m, int n)
{
   int j = 0; 
   for (int i=0; i<n&&j<m; i++)
       if (str1[j] == str2[i])
         j++;
   return (j==m);
}
 
int main()
{
 ios_base::sync_with_stdio(false);
	ll t,n;
	cin>>t;
	string s,s1;
	int l,l1;
	while(t--)
	{
		cin>>s>>s1;
		l=s.length();
		l1=s1.length();
		if(l<l1)
		{
			if(chk(s,s1,l,l1))
		
				cout<<"YES\n";
			else
				cout<<"NO\n";
	    }
	    else
	    {
	    	if(chk(s1,s,l1,l))
		
				cout<<"YES\n";
			else
				cout<<"NO\n";
	    }
	}
	return 0;
}



