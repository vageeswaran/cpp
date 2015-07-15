#include<bits/stdc++.h>
using namespace std;
int n;
int partition(int l,int r,int a[])
{
	int p=l,i=l+1,j=r;
	while(i<=j){
	while(a[i]<=a[p])
		i++;
	while(a[j]>a[p])
		j--;
	if(i>j)	{
		swap(a[j],a[p]);
		break;}
	swap(a[i],a[j]);
	
	
	}
	
	return j;
}
void quick(int a[],int low,int high)
{
	int pivot;
	if(low<high)
	{
		pivot=partition(low,high,a);
		quick(a,low,pivot-1);
		quick(a,pivot+1,high);
	}
}
int main()
{
	//int a[]={9,6,7,8,4,3,4,5,1,2},i;
	cin >>n;
	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	quick(a,0,n-1);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}



