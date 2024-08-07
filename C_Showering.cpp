#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        int pre=0;
        bool cs=false;
        for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            if(l-pre>=s){
                cs=true;
            }
            pre=r;
        }
        if(!cs && m-pre>=s){
            cs=true;
        }
        if(cs==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0; 
}