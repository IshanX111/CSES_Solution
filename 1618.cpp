#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n;
    cin>>n;
    ll res=0;
    ll temp=5;

    while((n/temp)>0){

        res+=n/temp;
        temp=temp*5;

    }
    cout<<res<<endl;






}





