#include<bits/stdc++.h>
using namespace std;
int getMid(int s, int e) {  return s + (e -s)/2;  }
int maxx(int a,int b)
{
	return (a>b?a:b);
}
int gms(int *st, int ss, int se, int qs, int qe, int index)
{
    
    if (qs <= ss && qe >= se)
        return st[index];
 
    
    if (se < qs || ss > qe)
        return 0;
 
    
    int mid = getMid(ss, se);
    return (gms(st, ss, mid, qs, qe, 2*index+1)+gms(st, mid+1, se, qs, qe, 2*index+2));
}
 
int gs(int *st, int n, int qs, int qe)
{
    
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        
        return -1;
    }
 
    return gms(st, 0, n-1, qs, qe, 0);
}
int cStu(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
 
    int mid = getMid(ss, se);
    st[si] = (cStu(arr, ss, mid, st, si*2+1)+
              cStu(arr, mid+1, se, st, si*2+2));
    return st[si];
}
 int *cst(int arr[], int n)
{
    
    int x = (int)(ceil(log2(n))); 
    int max_size = 2*(int)pow(2, x) - 1; 
    int *st = new int[max_size];
    cStu(arr, 0, n-1, st, 0);
    return st;
}
 

int main()
{
    int n,i,m,l,r,max,j,z;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    	cin>>a[i];
    int *st = cst(a, n);
 	cin>>m;
 	while(m--)
 	{
 		cin>>l>>r;
 		l--;
 		r--;
 		max=-10000;
 		for(i=l;i<=r;i++)
 		{
 			for(j=i;j<=r;j++){
 				z=gs(st, n,i,j);
    			if(max<=z)
    				max=z;
    		}
    	}
    	cout<<max<<endl;
    }
    return 0;
}
