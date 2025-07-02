#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,w,h;
    cin>> x>>y>>w>>h;
    int ans=min(min(x,y),min(w-x,h-y));

    cout <<ans;

    return 0;
}