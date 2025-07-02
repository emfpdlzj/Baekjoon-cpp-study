#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    // 
    return 0;
}