#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=3,m=5,i,j;
int a[3][5]={{1,3,2,6,8},{-9,7,1,-1,2},{1,5,0,1,9}};
int b[n][m];
for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
  	b[i][j]=0;
  }
}
i=n-1;
for(j=m-2;j>=0;j--)
{
	if(a[i][j+1]==(a[i][j]+1)||a[i][j+1]==(a[i][j]-1))
	{
		b[i][j]=b[i][j+1]+1;
	}	
}
j=m-1;
for(i=n-2;i>=0;i--)
{
	if(a[i+1][j]==(a[i][j]+1)||a[i+1][j]==(a[i][j]-1))
	{
		b[i][j]=b[i][j+1]+1;
	}	
}
for(i=n-2;i>=0;i--)
{
	for(j=m-2;j>=0;j--)
	{
		if((a[i+1][j]==(a[i][j]+1))||(a[i+1][j]==(a[i][j]-1)) && ((a[i][j+1]==(a[i][j]+1))||(a[i][j+1]==(a[i][j]-1))))
		{
			if(b[i][j+1]>=b[i+1][j])
				b[i][j]=b[i][j+1]+1;
			else
				b[i][j]+=b[i+1][j]+1;
		}
		else if((a[i+1][j]==(a[i][j]+1))||(a[i+1][j]==(a[i][j]-1)))
			b[i][j]=b[i+1][j]+1;
		else if(((a[i][j+1]==(a[i][j]+1))||(a[i][j+1]==(a[i][j]-1))))
			b[i][j]=b[i][j+1]+1;
	}
}
for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
  	cout<<b[i][j]<<"  ";
  }
  cout<<endl;
}

return 0;
}
