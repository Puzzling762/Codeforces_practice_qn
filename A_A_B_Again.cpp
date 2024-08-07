#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        int s=0;
        cin>>n;
        while(n>0){
            int d=n%10;
            s+=d;
            n=n/10;
        }
        cout<<s<<endl;
    }
    return 0; 
}