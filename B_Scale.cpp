#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<char>> grid(n,vector<char>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cin >> grid[i][j];
            }
        }
        for(int i=0;i<n;i+=k){
            for(int j=0;j<n;j+=k){
                cout<<grid[i][j];
            }
            cout<<endl;
        }
    }
    return 0; 
}