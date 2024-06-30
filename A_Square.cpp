#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    while(n--){
        int s=0;
        int a1[2],a2[2],a3[2],a4[2];
        for(int i=0;i<2;i++){
            cin>>a1[i];
        }
        for(int i=0;i<2;i++){
            cin>>a2[i];
        }
        for(int i=0;i<2;i++){
            cin>>a3[i];
        }
        for(int i=0;i<2;i++){
            cin>>a4[i];
        }
        if(a1[0]==a2[0]){
            s=a1[1]-a2[1];
        }
        else if(a1[0]==a3[0]){
            s=a1[1]-a3[1];
        }
        else{
            s=a1[1]-a4[1];

        }
        cout<<s*s<<endl;
    }
    return 0; 
}