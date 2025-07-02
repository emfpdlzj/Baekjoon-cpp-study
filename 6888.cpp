#include <bits/stdc++.h>
using namespace std;
int main(){
    int yy, rr;
    cin >> yy >> rr;
    int i=0;
    for(i=yy;i<=rr;i++){
        if(((i-yy)%4==0)&&((i-yy)%3==0)&&((i-yy)%5==0)){
            cout << "All positions change in year "<<i<<"\n";
        }
    }

    return 0;
}