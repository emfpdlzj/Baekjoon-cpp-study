#include <bits/stdc++.h>
using namespace std;
map<string,string> mp1;
map<string, string> mp2;
vector<string> v;
int main(){
    int n,m;
    cin >> n >> m;
    while(n--){
        string s;
        cin >> s;
        mp1.insert({s,s});
    }
    while(m--){
        string s;
        cin >> s;
        mp2.insert({s,s});
    }
    for(auto s: mp1){
        auto it=mp2.find(s.first);
        if(it!=mp2.end()){
            v.push_back(s.first);
        }
    }
    cout << v.size()<<'\n';
    for(string s : v){
        cout << s <<'\n';
    }
}