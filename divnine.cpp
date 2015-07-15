#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
ll a[11];
 
int main()
{
    ios_base::sync_with_stdio(false);
    ll i,l,T,sum,x;
    cin>>T;
    string str;
    while(T--)
    {
        cin>>str;
        for(i=0;i<11;++i)
            a[i] = 0;
        l = str.length();
        for(i=0;i<l;++i)
            ++a[str[i]-'0'];
        sum = 0;
        for(i=0;i<11;++i)
            sum += a[i]*i;
        cout<<sum<<"\n";
        x = min(9-(sum%9), sum%9);
        cout<<x<<"\n";
    }
    return 0;
}
