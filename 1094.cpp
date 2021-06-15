#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll c=0;

    for(ll i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            continue;
        }
        else{
            c=c+abs(a[i+1]-a[i]);
            a[i+1]=a[i];
        }
    }
    cout<<c<<endl;


}
