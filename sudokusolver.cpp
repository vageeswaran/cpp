#include<bits/stdc++.h>
using namespace std;
#define n 9
bool find(int g[n][n],int &r,int &c)
{
   for(r=0;r<n;r++)
   {
   		for(c=0;c<n;c++)
   		{
   			if(g[r][c]==0)
   				return true;
   		}
   }
   return false;
}
bool rowchk(int g[n][n],int r,int num)
{
	for(int c=0;c<n;c++)
	{
		if(g[r][c]==num)
			return true;
	}
	return false;
}
bool colchk(int g[n][n],int c,int num)
{
	for(int r=0;r<n;r++)
	{
		if(g[r][c]==num)
			return true;
	}
	return false;
}
bool boxchk(int g[n][n],int rs,int cs,int num)
{
	for(int r=0;r<3;r++){
	for(int c=0;c<3;c++)
	{
		if(g[r+rs][c+cs]==num)
			return true;
	}
	}
	return false;
}
bool issafe(int g[n][n],int row,int col,int num)
{
	return (!(rowchk(g,row,num)))&&(!(colchk(g,col,num)))&&(!(boxchk(g,row-row%3,col-col%3,num)));
}
void print(int g[n][n])
{
	int cnt=0;
	for(int r=0;r<n;r++)
	{
		if(r%3==0)
			cout<<"-------------------------"<<endl;
		for(int c=0;c<n;c++)
		{
			if(cnt%3==0){
				cout<<"| ";
				cnt=0;
				}
			cout<<g[r][c]<<" ";
				cnt++;
		}
		cout<<"|"<<endl;
	}
	cout<<"-------------------------"<<endl;
}
bool solve(int g[n][n])
{
	int row,col;
	if(!find(g,row,col))
		return true;
	
	for(int num=1;num<=9;num++)
	{
		if(issafe(g,row,col,num))
		{
			g[row][col]=num;
			if(solve(g))
				return true;
			
			g[row][col]=0;
		}
	}
	return false;

}
int main()
{
  int g[n][n],i,j;
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
     	cin>>g[i][j];
     }
  }
  if(solve(g))
  {
  	cout<<endl<<endl;
  	print(g);
  	 cout<<endl<<endl;
  }
  else
  {cout<<"No solution exists";
  }
  return 0;
}
