#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n;
    cin>>n;
    if(n==1){
        cout<<n<<endl;
    }
    else{
    cout<<n<<" ";
    while(n!=1){

        if(n%2==0){
            n=n/2;
        }
        else{
            n=(n*3)+1;
        }
        cout<<n<<" ";

    }
    cout<<endl;
    }



}
