#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cout<<"enter size";
    cin>>n;
    int a[n];
    int flag=0,k=0;
    vector<int> temp;
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            temp.push_back(a[i]);
        }

    }
    int s=temp.size();
    cout<<"the leaders are:";
    for(int i=0;i<s;i++){
        cout<<temp[i]<<endl;
    }
    return 0; 
}
