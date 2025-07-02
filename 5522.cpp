#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
long long sum=0;
int main(){
    for(int i=0;i<5;i++){
        long long r;  
        cin >> r;
        v.push_back(r);
        sum+=r;
    }
    cout << sum;

    return 0;
}