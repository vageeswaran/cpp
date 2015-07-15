#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void sortbymod(int a[],int n, int m)
{
	int p=0;
	for (int s = 0; s < m; ++s) {
			for (int i = p; i < n; ++i) {
				if (a[i] % m == s) {
					if (i != p) {
						swap(a[i],a[p]);
					}
					++p;
				}
			}
		}
}
int main()
{
	int n,i,j,m;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	sortbymod(a,n,m);
	print(a,n);
}
