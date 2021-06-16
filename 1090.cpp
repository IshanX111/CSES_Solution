#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n,x,i,j;
    cin>>n>>x;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll c=0;

    for(i=0,j=n-1;i<=j;){

        if(a[i]+a[j]>x){
            j--;

        }
        else if(a[i]+a[j]<=x){
            i++;
            j--;
        }
        c++;

    }
    cout<<c<<endl;

}
