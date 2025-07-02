#include <bits/stdc++.h>
using namespace std;
int x;
int main(){
    cin>>x;
    if(x%3==0){
        cout<<"S\n";
    }else if(x%3==1){
        cout<<"U\n";
    }else{
        cout<<"O\n";
    }

    return 0;
}