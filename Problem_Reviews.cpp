#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    while(n--){
        int flag=0;
        int t=0;
        cin>>t;
        int a[t];
        for(int i=0;i<t;i++){
            cin>>a[i];
        }
        for(int i=0;i<t;i++){
            if(a[i]<=4){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        flag=0;
    }
    return 0; 
}