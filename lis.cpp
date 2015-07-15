#include<bits/stdc++.h>
using namespace std;
int lis(int a[],int n)
{
  int lis[n],prev[n];
  int max=0,i,j,bstend=0;
  for(i=0;i<n;i++)
  {	lis[i]=1;
  	prev[i]=-1;
  }
  
  for(i=1;i<n;i++)
  {
  	for(j=0;j<i;j++)
  	{
  		if(a[i]>a[j] && (lis[i]<lis[j]+1))
  		{	lis[i]=lis[j]+1;
  			prev[i]=j;
  		}
  	}
  
  	if(max<lis[i]){
  		bstend=i;
  		max=lis[i];
  		}
  }
  std::vector<int> results;
  results.reserve(n);

  std::stack<int> stk;
  int current = bstend;
  while (current!=-1)
  {
    stk.push(a[current]);
    current = prev[current];
  }

  while (!stk.empty())
  {
    results.push_back(stk.top());
    stk.pop();
  }
  for(i=0;i<results.size();i++)
  	cout<<results[i]<<" ";
  cout<<endl;
  return max;
}
int main()
{
   int n;
   cin>>n;
   int a[n],i,z;
   for(i=0;i<n;i++)
	   	cin>>a[i];
	z=lis(a,n);
	cout<<"length is "<<z<<endl;
	return 0;	   	
}
