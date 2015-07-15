#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    return (a > b)? a : b;
}
int lcs(string x,string y,int m,int n)
{
    int l[m+1][n+1],i,j;
    
    for(i=0;i<=m;i++)
    {
		for(j=0;j<=n;j++)
		{
		    if(i==0||j==0)
		    	l[i][j]=0;
		    else if(x[i-1]==y[j-1])
		    {
		    	l[i][j]=l[i-1][j-1]+1;
		    }
		    else
		    {
		    	l[i][j]=max(l[i-1][j],l[i][j-1]);
		    }
		}
    }
    int index=l[m][n];
	string z="";
	i=m;j=n;
	char lcs[index+1];
	lcs[index] = '\0'; 

	while(i>0 &&j>0)
	{
	   if(x[i-1]==y[j-1])
	   {
	   		lcs[index-1]=x[i-1];
	   		i--;j--;index--;
	   }
	   else if(l[i-1][j]>l[i][j-1])
	   	i--;
	   else
	   	j--;
	}
	cout<<lcs<<endl;
    return l[m][n];
}
int main()
{ 
  string s,s1;
  int l,l1,z;
  cin>>s;
  cin>>s1;
  l=s.length();
  l1=s1.length();
  z=lcs(s,s1,l,l1);
  cout<<"length is "<<z<<endl;
  return 0;
}
