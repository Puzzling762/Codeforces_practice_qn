#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while (t--)
    {
        int n=0;
        int ans=0;
        cin>>n;
        string a1,a2;
        cin>>a1>>a2;
        int add=0,rem=0,mov=0;
        for (int i = 0; i < n; i++)
        {
            if (a1[i]=='0'&& a2[i]=='1')
            {
                add++;
            }
            else if (a1[i]=='1'&&a2[i]=='0')
            {
                rem++;
            }
            else if (a1[i]=='1'&&a2[i]=='0')
            {
                mov++;
            }
            
            ans=max(add,rem)+mov;
            
            
            
        }
        cout<<ans<<endl;
        
    }
    
    return 0; 
}