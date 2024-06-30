#include<iostream>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        char c1=a[0];
        char c2=b[0];
        a[0]=c2;
        b[0]=c1;
        cout<<a<<" "<<b<<endl;
    }
    return 0; 
}