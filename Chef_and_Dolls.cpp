#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--){
        int temp=0;
        int n=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[a[i]]++;
        }
        for(auto it:mpp){
            if(it.second==1){
                cout<<it.first<<endl;
            }
        }
    }
    return 0; 
}