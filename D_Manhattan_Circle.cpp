#include<iostream>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while (t--)
    {
        int a=0,b=0;
        int a1=0,a2=0,b1=0,b2=0;
        cin>>a>>b;
        char arr[a][b];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin>>arr[i][j];
                
            }
            
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (arr[i][j]=='#')
                {
                    a1=i;
                    b1=j;
                    break;
                }
                
                
            }
        }
        for (int i = a-1; i>=0; i--)
        {
            for (int j = b-1; j>=0; j--)
            {
                if (arr[i][j]=='#')
                {
                    a2=i;
                    b2=j;
                    break;
                }
                
                
            }
        }
        int ans1=((a1+a2)/2)+1;
        int ans2=((b1+b2)/2)+1;
        cout<<ans1<<" "<<ans2<<endl;

        
    }
    
    return 0; 
}