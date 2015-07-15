#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> a;
	int i,c,n,j,l;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>c;
		a.push_back(c);
	}
	l=n-1;
	a[l]++;
	c=a[l]%10;
	j=a[l]/10;
	a[l]=c;
	l--;
	vector<int>::iterator it;
	it = a.begin();

	while(j>0)
	{
		if(l<0 && j!=0){
			a.insert(it,j);
			j=j/10;
		}
		else
		{
		
		j=a[l]+j;
		a[l]=j%10;
		j=j/10;

		l--;
		}
	}
	n=a.size();
	for(i=0;i<n;i++)
	{
		
		if(a[i]!=0) 
			break;

	}

	for(;i<n;i++)
		cout<<a[i]<<" ";		
}
