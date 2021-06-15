#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n-1;i++){
        cin>>a[i];
    }
    sort(a,a+n-1);

    for(ll i=1;i<=n;i++){
        if(a[i-1]!=i){
            cout<<i<<endl;
            return 0;
        }
    }


}
