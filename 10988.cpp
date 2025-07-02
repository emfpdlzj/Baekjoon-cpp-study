#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[101];
    cin >> s ;
    int i=0;
    int sl=strlen(s)-1;
    for(i=0;i<sl/2+1;i++){
        if(s[i]!=s[sl-i] ){
            //cout << "warning: different \n";
            //cout << "i : " <<s[i]<<", sl-i : "<<s[sl-i]<<"\n";
            cout << "0";
            return 0;
        }
        // cout << "i : " <<s[i]<<", sl-i : "<<s[sl-i]<<"\n";
    } 
    cout << "1";

    return 0;
}