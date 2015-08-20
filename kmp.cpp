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
void preprocess(string pat,int m,int lps[])
{
	int len=0,i;
	lps[0]=0;
	i=1;
	while(i<m)
	{
		if(pat[i]==pat[len])
		{
			len++;
			lps[i]=len;
			i++;
		}
		else
		{
			if(len!=0)
			{
				len=lps[len-1];
			}
			else
			{
				lps[i]=0;
				i+=1;
			}
		}
	}
}
void kmp(string txt,string pat)
{
	int n=txt.length(),m=pat.length();
	int *lps = (int *)malloc(sizeof(int)*m);
	int j=0,i=0;
	preprocess(pat,m,lps);
	while(i<n)
	{
		if(pat[j]==txt[i])
		{
			j++;
			i+=1;
		}
		if(j==m)
		{
			cout<<i-j<<endl;
			j=lps[j-1];
		}
		else if(i<n&&pat[j]!=txt[i])
		{
			if(j!=0)
				j=lps[j-1];
			else
				i+=1;
		}
	}
	free(lps);
}
int main()
{
 ios_base::sync_with_stdio(false);
	string s,pat;
	cin>>s;
	cin>>pat;
	kmp(s,pat);
	return 0;
}



