#include <bits/stdc++.h>
using namespace std;
string r;
int main(){
    cin >> r;
    int it=r.find("driip",r.size()-5);
    if(it!=string::npos & it == r.size()-5){
        cout << "cute"<<'\n';
    }else{
        cout << "not cute"<<'\n';
    }
    return 0;
}