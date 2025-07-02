#include <bits/stdc++.h>
using namespace std;
queue<int> v;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int a;
    cin >> a;
    
    for(int i=1;i<=a;i++){
        v.push(i);
    }
    
    while(v.size()!=1){
        v.pop();
        if(v.size()==1)
            break;
        
        v.push(v.front());
        v.pop();
    }
    cout <<v.front() <<"\n";
    return 0;
}

