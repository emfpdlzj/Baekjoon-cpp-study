#include <bits/stdc++.h>
using namespace std;

int main(){
    int L,A,B,C,D;
    cin >> L>>A>>B>>C>>D;
    int a=(A/C);
    if((A%C)!=0){
        a++;
    }
    int b=(B/D);
    if((B%D)!=0){
        b++;
    }
    int res = (a>b? a: b);
    cout << L-res <<"\n";
    return 0;
}