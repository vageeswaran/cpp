#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

void swap(int *a, int *b){
	int temp= *a;
	*a= *b;
	*b = temp;
}

bool swaposs(int i, int j, vector<int> a){
	
	for(int k=i;k<j;k++){
		
		if(a[k] == a[j])
			return 1;
	}
	
	return 0;
}


void permutations(vector<vector<int> >&vec, vector<int>& a, int n, int start){
	
	if(start>=n){
		vec.push_back(a);
		/*for(int i=0;i<start;i++)
			{
				cout<<a[i]<<" ";
			}
			*/
	//	cout<<endl;
		return;
	}
	
	for(int i=start;i<n;i++){
		
		if(swaposs(start,i,a))
			continue;
		
		swap(&a[start],&a[i]);
		//cout<<start<<" "<<i<<endl;
		permutations(vec,a,n,start+1);
		swap(&a[start], &a[i]);
	}
		
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int>a;
	int i,j;
	vector<vector<int> >vec;
	int path[n+1];
	int ele;
	
	for(i=0;i<n;i++){
		cin>>ele;
		a.push_back(ele);
	}
	
	sort(a.begin(),a.end());
	
	permutations(vec,a,n,0);
	
	
	for(i=0;i<vec.size();i++){
		for(j=0;j<vec[i].size();j++)
			cout<<vec[i][j]<<" ";
		
		cout<<endl;
	}
	
	return 0;
}
