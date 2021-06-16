#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n;
    cin>>n;
    vector<ll>v(n);
    set<ll>s;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    cout<<s.size()<<endl;

}
