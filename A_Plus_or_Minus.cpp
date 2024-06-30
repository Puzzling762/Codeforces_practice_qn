#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    while (n--)
    {
        int a[3];
        for (int i = 0; i <3; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if ((a[0]+a[1])==a[2])
            {
                cout<<"+"<<endl;
                break;

            }
            else{
                cout<<"-"<<endl;
                break;
            }
            
        }
        
        
    }
    
    return 0; 
}