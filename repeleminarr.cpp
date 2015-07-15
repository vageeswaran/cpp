#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map <string, int> msi;
#define mod 1000000007
#define MAX 500
#define fl(i,a,b) for(long long i=a;i<b;i++)
#define fi(i,a,b) for(int i=a;i<b;i++)

int main()
{
 ios_base::sync_with_stdio(false);
	int size;
	cin>>size;
	int i;   
	vector <int> arr(size,0);
 	for(i = 0; i < size; i++)
 		cin>>arr[i];
    for(i = 0; i < size; i++)
    {
        if(arr[abs(arr[i])-1] > 0)
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
        else{
        
            cout<<abs(arr[i]);
			break;
		}
    }

	return 0;
}



