#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
vector<int> psum;
int main(){
    cin >>n;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    psum.push_back(v[0]);
    int ret=psum[0];
    for(int i=1;i<n;i++){
        int t=psum[i-1]+v[i];
        psum.push_back(t);
        ret+=psum[i];
    }
    cout<<ret;
    return 0;
}