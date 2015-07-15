#include<bits/stdc++.h>
using namespace std;
void shell_sort(int a[],int n)
{
	int temp,j,i,gap;
	for(gap=n/2;gap>0;gap/=2)
	{
		for(i=gap;i<n;i++)
		{
			temp=a[i];
			for(j=i;j>=gap&&a[j-gap]>temp;j-=gap)
			{
				a[j]=a[j-gap];
			}
			a[j]=temp;
		}
	}
}
void sel_sort(int a[],int n)
{
	int i,j,mi,tmp;
	for(i=0;i<n-1;i++)
	{
		mi=i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[mi])
				mi=j;
		tmp=a[i];
		a[i]=a[mi];
		a[mi]=tmp;
	}
}
void bubbl_sort(int a[],int n)
{
	int i,j,mi,tmp,fl;
	for(i=0;i<n-1;i++)
	{
		fl=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
				fl=1;
			}	
		}
		if(fl==0) break;
	}
}
void ins_sort(int a[],int n)
{
	int i,j,tmp,key;
	for(i=1;i<n;i++)
	{
		j=i-1;
		key=a[i];
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
void mrg(int arr[],int l,int m,int r)
{
	int i,j,k;
	int n1=m-l+1,n2=r-m;
	int L[n1],R[n2];
	for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
	 i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
	 while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }        
}
void merge(int a[],int l,int r)
{
	int m;
	if(l<r)
	{
		m=l+(r-l)/2;
		merge(a,l,m);
		merge(a,m+1,r);
		mrg(a,l,m,r);
	}
}

int main()
{
 ios_base::sync_with_stdio(false);
	int i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//sel_sort(a,n);
	//bubbl_sort(a,n);
	//ins_sort(a,n);
	//merge(a,0,n-1);
	shell_sort(a,n);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}



