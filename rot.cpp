#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n,i,j,k;
  cin>>n;
  int a[n][n];
  for(i=0;i<n;i++)
  	for(j=0;j<n;j++)
  		cin>>a[i][j];
  		
  vector <vector <int > > vi;
  vector <int> v;
  for(i=0;i<n/2;i++)
  {
  	for(j=0;j<n;j++)
  		v.push_back(a[i][j]);
  	for(j=1;j<n;j++)
  		v.push_back(a[j][n-i-1]);

  	for(j=n-2;j>=0;j--)
  		v.push_back(a[n-1-i][j]);
  	for(j=n-2;j>0;j--)
  		v.push_back(a[j][i]);

  	vi.push_back(v);
  	v.clear();
  }
  for(i=0;i<vi.size();i++)
  {
  	for(j=0;j<vi[i].size();j++)
  		cout<<vi[i][j]<<" ";
  	
  	cout<<endl;
  }
}
