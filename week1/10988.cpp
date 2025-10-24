//도식화 하여 풀 것 
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1;
    s2=s1;
    reverse(s1.begin(),s1.end());
    if(s1==s2){
        cout << 1;
    }else{
        cout << 0;
    }

    return 0;
}