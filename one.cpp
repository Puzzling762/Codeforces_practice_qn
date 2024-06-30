#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int s(int k,vector<int>&a,int n){
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        p[i]=i+1;
    }
    while(true){
        vector<int> kick;
        for(int i=0;i<k;i++){
            if(a[i]<=p.size()){
                kick.push_back(p[a[i]-1]);
            }
        }
        if(kick.empty()){
            break;
        }
        for(int i=p.size()-1;i>=0;i--){
            if(find(kick.begin(),kick.end(),p[i])!=kick.end()){
                p.erase(p.begin()+i);
            }
        }
    }
    return p.size();
}
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k, q;
        cin >> k >> q;
        vector<int> a(k);
        for (int j = 0; j < k; j++)
        {
            cin >> a[j];
        }
        vector<int> n(q);
        for (int j = 0; j < q; j++)
        {
            cin >> n[j];
        }
        cout << endl;

        for (int j = 0; j < q; j++)
        {
            cout << s(k, a, n[j]) << " ";
        }
    }
    return 0;
}
