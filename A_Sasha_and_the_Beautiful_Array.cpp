#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;

    while (n--)
    {
        int temp=0;
        int t=0;
        cin>>t;
        vector <int> a(t);
        for(int i=0;i<t;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=1;i<t;i++){
            temp+=abs(a[i]-a[i-1]);
        }
        cout<<temp<<endl;
    }
    

    return 0; 
}