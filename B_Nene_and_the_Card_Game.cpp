#include<iostream>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        int c=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int arr[n+1]={0};
        for(int i=0;i<n;i++){
            arr[a[i]]++;
        }
        for(int i=0;i<=n;i++){
            if(arr[i]>1 && arr[i]%2==0){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0; 
}