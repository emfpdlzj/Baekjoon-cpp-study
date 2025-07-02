#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,aa=0,cc=0;
    cin>> N;
    int rr[N];
    for(int i=0;i<N;i++){
        cin >> rr[i];
        aa+=rr[i];
    }
    double bb=aa/N;
    for(int i=0;i<N;i++){
        cc+=(bb>rr[i]? bb-rr[i] : rr[i]-bb);
    }
    cout << cc/2 ;


    return 0;
}