#include <bits/stdc++.h>
using namespace std;
vector<pair<int, string>> v;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int m,n;
    cin >> m>>n;
    for(int i=0;i<m;i++){
        string a;
        cin >> a;
        v.push_back({i,a});
    }
    while(n){
        string r;
        cin >> r;
        if(r[0]<65){
            int l=stoi(r);
            cout << v[l].second << "\n";
        }else{
            for(int i=0;i<m;i++){
                if(r == v[i].second){
                    cout << v[i].first;
                    break;
                }
            }
        }
        n--;
    }

    return 0;
}