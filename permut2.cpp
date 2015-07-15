#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,flag,i,j;
 int a[100002];
 while(1)
 {
    cin>>n;
    if(n<=0)
    	break;
    flag=1;
    for(i=0;i<n;i++)
    	cin>>a[i];
    
    for(i=0;i<n;i++)
    {
       if(a[a[i]-1]!=i+1)
       {
       		flag=0;
       		break;
       }
    }
    if(flag==1)
    	cout<<"ambiguous\n";
   	else
   		cout<<"not ambiguous\n";
   		
 }
 return 0;
}
