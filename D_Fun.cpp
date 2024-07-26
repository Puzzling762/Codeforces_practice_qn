#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        long long ans=0;
        for(int i=1;i<=x;i++){
            int a1=min(x-i,n/i);
            for(int j=1;j<=a1;j++){
                int a1=min(x-i-j,(n-i*j)/(i+j));
                ans+=max(0,a1);
            }
        }
        cout<<ans<<endl;
    }
    return 0; 
}