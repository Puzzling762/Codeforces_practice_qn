#include<iostream>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;

        if (((int)s[0] + (int)s[1] + (int)s[2]) == ((int)s[3] + (int)s[4] + (int)s[5])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0; 

}
