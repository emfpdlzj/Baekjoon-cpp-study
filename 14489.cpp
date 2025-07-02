#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    cin >> a>>b>>c;
    int r=a+b-2*c;
    if(r>=0){
        cout << r;
    }else{
        cout << a+b;
    }

    return 0;
}