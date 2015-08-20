#include<bits/stdc++.h>
using namespace std;
#define d 256
#define q 101
void rkp(string txt,string pat)
{
	int m=pat.length(),n=txt.length(),i,j,p=0,t=0,h=1;
	for(i=0;i<m-1;i++)
		h=(h*d)%q;
	for(i=0;i<m;i++)
	{
		p=(d*p+pat[i])%q;
		t=(d*t+txt[i])%q;
	}
	for(i=0;i<n-m+1;i++)
	{
		if(p==t)
		{
			for(j=0;j<m;j++)
			{
				if(pat[j]!=txt[i+j])
					break;
			}
			if(j==m)
				cout<<"found at"<<i<<endl;
		}
		if(i<n-m)
		{
			t=(d*(t-txt[i]*h)+ txt[i+m])%q;
			if(t<0)
				t+=q;
		}
	}
}
int main()
{
 ios_base::sync_with_stdio(false);
	string pattern,text;
	cin>>text;
	cin>>pattern;
	rkp(text,pattern);
	return 0;
}




