#include<bits/stdc++.h>
typedef int ll;
using namespace std;
int main(){

    string s;
    //max(1,2);
    cin>>s;
    ll si=s.size();
    ll a=0,t=0,c=0,g=0;
    ll check[]={0,0,0,0};
    for(ll i=0;i<si-1;i++){

        if(s[i]==s[i+1]){
            if(s[i]=='A'){
                a++;
            }
            else if(s[i]=='T'){
                t++;
            }
            else if(s[i]=='C'){
                c++;
            }
            else if(s[i]=='G'){
                g++;
            }
        }
        else if(s[i]!=s[i+1]){
            if(s[i]=='A'){
                check[0]=max(check[0],a+1);
                a=0;
            }
            else if(s[i]=='T'){
                check[1]=max(check[1],t+1);
                t=0;
            }
            else if(s[i]=='C'){
                check[2]=max(check[2],c+1);
                c=0;
            }
            else if(s[i]=='G'){
                check[3]=max(check[3],g+1);
                g=0;
            }
            if(s[i+1]=='A'){
                check[0]=max(check[0],1);
            }
            else if(s[i+1]=='T'){

                check[1]=max(1,check[1]);
            }
            else if(s[i+1]=='C'){

                check[2]=max(1,check[2]);
            }
            else if(s[i+1]=='G'){

                check[3]=max(1,check[3]);
            }
        }


    }
        check[0]=max(check[0],a+1);
        check[1]=max(check[1],t+1);
        check[2]=max(check[2],c+1);
        check[3]=max(check[3],g+1);
        //cout<<check[1]<<endl;
        ll res=*max_element(check,check+4);
        cout<<res<<endl;



}
