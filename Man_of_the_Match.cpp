#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    while(n--){
        int max=0;
        int ans=0;
        int total=0,a=0,b=0;
        for(int i=0;i<22;i++){
            cin>>a>>b;
            int total=a+(b*20);
            if(total>max){
                max=total;
                ans=i;
            }

        }
        cout<<ans+1<<endl;
    }
    return 0; 
}