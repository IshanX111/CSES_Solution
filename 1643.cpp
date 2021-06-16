#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll mth=0;
    ll msf=INT_MIN;

    for(ll i=0; i<n; i++)
    {
        mth=mth+a[i];
        if(a[i]>mth){
            mth=a[i];
        }
        if(mth>msf)
        {
            msf=mth;
        }
    }

    cout<<msf<<endl;

}
