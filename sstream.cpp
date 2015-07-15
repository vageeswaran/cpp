#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	int a,i;
	vector <int> vi;
	stringstream ss(s);
	while(ss)
	{
		ss>>a;
		vi.push_back(a);
	}
	
	for(i=0;i<vi.size()-1;i++)
	{	cout<<vi[i]<<endl;
	}
	return 0;
}
