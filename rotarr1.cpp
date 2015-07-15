#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,j,p,q,t,k,c,z,v;
  cin>>n;
  int a[n][n];
  string s;
  cin>>s;
  
    for(i=0;i<n;i++){
	  for(j=0;j<n;j++){
	  	cin>>a[i][j];
	  	b[i][j]=0;
	  }
  }
  
  for(i=0;i<n/2;i++)
  {
  		c=0;
  		k=i;
  		t=i;
  		v=a[t][k];
  		while((k!=t)||(c==0)||(k!=i&&t!=i))
  		{
  		   if(k==n-1-i&& t!=n-i-1) t++;
  		   else if(t==n-1-i && k!=i) k--;
  		   else if(t==i && k!=n-1-i) k++;
  		   else if(k==i&&t!=i)t--;
  		   
			
  		   	 z=a[t][k];
  		   	 a[t][k]=v;
  			 cout<<v<<" ";
  		   v=z;
  		   c++;
  		}
  }
  
  
  for(i=0;i<n;i++)
  {
  		for(j=0;j<n;j++)
  			cout<<a[i][j]<<" ";
  } 
  return 0;
}
