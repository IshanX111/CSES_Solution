#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n;
    cin>>n;
    if(n==1){
        cout<<n<<endl;
    }

    else if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        for(ll i=2;i<=n;i=i+2){
            cout<<i<<" ";
        }

        for(ll i=1;i<=n;i=i+2){
            cout<<i<<" ";
        }

        cout<<endl;



    }


}
