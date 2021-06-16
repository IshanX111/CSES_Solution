#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n,des,store1,store2;
    cin>>n>>des;
    ll b[n],a[n];
    for(ll i=0;i<n;i++){
        cin>>b[i];
        a[i]=b[i];
    }
    sort(a,a+n);
    ll c=0;
    for(ll i=0,j=n-1;i<n;){

        if(i>=j){
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
        if(a[i]+a[j]>des){
            j--;
        }

        else if(a[i]+a[j]<des){
            i++;
        }
        else if(a[i]+a[j]==des){
            store1=a[i];
            store2=a[j];
            break;
        }
    }
    //cout<<store1<<" "<<store2<<endl;
    for(ll i=0;i<n;i++){
        if(b[i]==store1){
            store1=i+1;
            b[i]=-11111;
            break;
        }
    }

    for(ll i=0;i<n;i++){
        if(b[i]==store2){
            store2=i+1;
            break;
        }
    }
    cout<<store1<<" "<<store2<<endl;



}
