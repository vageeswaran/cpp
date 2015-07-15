#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n,i,j,p,q;
  cin>>n;
  int a[n][n],b[n][n];
  string s;
  cin>>s;
  
    for(i=0;i<n;i++){
	  for(j=0;j<n;j++){
	  	cin>>a[i][j];
	  	b[i][j]=0;
	  }
  }
	  cout<<endl;
  if(s=="CW")
  {
  q=n-1;
  for(i=0;i<n/2;i++)
  {
  	for(j=i;j<q;j++)
  	{
  		b[i][j+1]=a[i][j];
	}
	q--;
  }
  
  q=n/2;
  p=n-2;
  for(i=n/2;i<n;i++)
  {
  	for(j=p;j>=q;j--)
  	{
  		b[i][j-1]=a[i][j];

  	}
  	p++;
  	q--;
  }
  q=n-1;
  for(j=0;j<n/2;j++)
  {
  	for(i=j;i<q;i++)
  		b[i][j]=a[i+1][j];
  	
  	q--;
  }

  q=n/2-1;
  p=n-2;
  for(j=n/2;j<n;j++)
  {
  	for(i=q;i<=p;i++)
  	{
  		b[i+1][j]=a[i][j];
  	}
  	p++;
  	q--;
  }
   for(i=0;i<n;i++){
	  for(j=0;j<n;j++){
	  	cout<<b[i][j]<<" ";
	  }
	  cout<<endl;
  }
  }
  else
  {
  	q=n-1;
  	for(i=0;i<n/2;i++)
  	{
  		for(j=i;j<q;j++)
  		{
  			b[i][j]=a[i][j+1];
  		}
  		q--;
  	}
  	   for(i=0;i<n;i++){
	  for(j=0;j<n;j++){
	  	cout<<b[i][j]<<" ";
	  }
	  cout<<endl;
  }
	  cout<<endl; 
  	q=n/2;
  	p=n-2;
    for(i=n/2;i<n;i++)
    {
    	for(j=q-1;j<p;j++)
    	{
    		b[i][j+1]=a[i][j];
    	}
    	p++;
    	q--;
    }
       for(i=0;i<n;i++){
	  for(j=0;j<n;j++){
	  	cout<<b[i][j]<<" ";
	  }
	  cout<<endl;
  }
 	  cout<<endl;
    q=n/2;
    p=n-1;
    for(j=0;j<q;j++)
    {
    	for(i=j;i<p;i++)
    		b[i+1][j]=a[i][j];
    	p--;
    }
    for(i=0;i<n;i++){
	  for(j=0;j<n;j++){
	  	cout<<b[i][j]<<" ";
	  }
	  cout<<endl;
  }
    	  cout<<endl;
    q=n/2-1;
    p=n/2;
    for(j=n/2;j<n;j++)
    {
		for(i=q;i<p;i++)
	  	{
  			b[i][j]=a[i+1][j];
	  	}
  		p++;
	  	q--;
    }
    for(i=0;i<n;i++){
	  for(j=0;j<n;j++){
	  	cout<<b[i][j]<<" ";
	  }
	  cout<<endl;
  }
  }
}
