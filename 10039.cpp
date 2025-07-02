#include<bits/stdc++.h>
using namespace std;
int main(){
    int s=0;
    for(int i=0;i<5;i++){
        int t;
        cin >> t;
        if(t<40) t=40;
        s+=t;
    }
    cout << s/5;
}