#include<bits/stdc++.h>
using namespace std;
void printSolution(int a[100][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
bool issafe(int a[100][100],int r,int c,int n)
{
	int i,j;
	for(i=0;i<c;i++)
		if(a[r][i]) return false;
	
	for(i=r,j=c;i>=0&&j>=0;i--,j--)
		if(a[i][j]) return false;
	
	for(i=r,j=c;i<n&&j>=0;i++,j--)
		if(a[i][j]) return false;
	
	return true;
}
bool solvenq(int a[100][100],int col,int n)
{
	if(col>=n)
	{
		return true;
	}
	for(int i=0;i<n;i++)
	{
		if(issafe(a,i,col,n))
		{
			a[i][col]=1;
			if(solvenq(a,col+1,n)==true)
				return true;
			
			a[i][col]=0;
		}
	}
	return false;
}
bool solveNQ(int N)
{
    int board[100][100];
    int i,j;
    for(i=0;i<N;i++)
    	for(j=0;j<N;j++)
    		board[i][j]=0;
 
    if ( solvenq(board, 0, N) == false )
    {
      cout<<"Solution does not exist";
      return false;
    }
 
    printSolution(board,N);
    return true;
}
int main()
{
 ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	solveNQ(n);
	return 0;
}



