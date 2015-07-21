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
 int t;
	cin>>t;
	while(t--){
	
	string s;
	cin>>s;
	int i=0,l=s.length(),j,k;
	for(i=0;i<l;i++)
	{
		for(j=0;j<=l/2;j++)
		{
		
		if(i+j==(l-1)||i==j){
			if(i<=l/2)
			{
			
			for(k=0;k<i;k++)
			cout<<" ";
			cout<<s[i];
			if(j!=l/2){
			
			for(k=i;k<l-i-2;k++)
			cout<<" ";
			cout<<s[i];
		}cout<<endl;
		}
		else
		{
			for(k=0;k<l-i-1;k++)
			cout<<" ";
			cout<<s[i];
			if(j!=l/2){
			
			for(k=l-i-1;k<i-1;k++)
			cout<<" ";
			cout<<s[i];
			cout<<endl;
		}
		
		}
	}
	}
}
}
	return 0;
}



