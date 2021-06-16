#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n,m,k,x;
    cin>>n>>m>>k;
    priority_queue<ll,vector<ll>,greater<ll> >q1,q2;
    while(n--){
        cin>>x;
        q1.push(x);
    }
    while(m--){
        cin>>x;
        q2.push(x);
    }
    ll c=0;
    while(1){

        if(q2.empty() || q1.empty()){
            break;
        }
        if(q1.top()<=q2.top()+k && q1.top()>=q2.top()-k){
            c++;
            q1.pop();
            q2.pop();
        }
        else if(q2.top()+k<q1.top()){
            q2.pop();
        }
        else if(q2.top()-k>q1.top()){
            q1.pop();
        }
    }
    cout<<c<<endl;




}
