#include <iostream>
using namespace std;

int count(int a1,int a2,int b1,int b2){
    int r[][4]={
        {a1, b1, a2, b2},
        {a1, b2, a2, b1},
        {a2, b1, a1, b2},
        {a2, b2, a1, b1}
    };
    int s_wins=0;

    for(int i=0;i<4;i++){
        int score1=0;int score2=0;

        if(r[i][0]>r[i][1]){
            score1++;

        }
        else if (r[i][0]<r[i][1])
        {
            score2++;
        }
        if(r[i][2]>r[i][3]){
            score1++;

        }
        else if (r[i][2]<r[i][3])
        {
            score2++;
        }

        if(score1>score2){
            s_wins+=1;
        }
        
    }
    return s_wins;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        cout<<count(a1,a2,b1,b2)<<endl;
    }


    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int wins = 0;
        if (a1 > b1 && a2 > b2) wins++;
        if (a1 > b2 && a2 > b1) wins++;
        if (a2 > b1 && a1 > b2) wins++;
        if (a2 > b2 && a1 > b1) wins++;
        cout << wins << endl;
    }
    return 0;
}