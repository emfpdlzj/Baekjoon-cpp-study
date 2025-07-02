#include <bits/stdc++.h>
using namespace std;

int main(){
    double k,dq,dw;
    cin >> k >> dq >> dw;
    double base=(dq-dw)/2;
    double rr=(double)(k*k-base*base);
    if(dq==dw){
        rr=k*k;
    }

    cout << rr;
    return 0;
}