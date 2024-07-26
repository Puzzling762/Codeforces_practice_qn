#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string a,b;
        cin>>a>>b;
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            vector<int> f(26,0),f1(26,0);
            for(int i=l;i<=r;i++){
                f[a[i]-'a']++;
                f1[b[i]-'a']++;
            }
            int c=0;
            for(int i=0;i<26;i++){
                c+=abs(f[i]-f1[i]);
            }
            cout<<c/2<<endl;
        }
    }
    return 0; 
}