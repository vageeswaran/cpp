#include<iostream>
#include<cstdio>
using namespace std;
//this is cpp     
int main()
{
int t,i;
scanf("%d",&t);
int count[1000001];
for(i=0;i<1000001;i++)
{
count[i]=0;
}
int in;
for(i=0;i<t;i++)
{
scanf("%d",&in);
count[in]++;
}
for(i=0;i<1000001;i++)
{
if(count[i]>0)
{
while(count[i]--)
{
printf("%d\n",i);
}
}
}
return 0;
} 
