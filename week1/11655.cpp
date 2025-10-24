#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i=0;i<s.size(); i++){
        if(('A'<=s[i]&&s[i]<='Z')){
          s[i]=s[i]+13;
          if(s[i]>'Z'){
            s[i]=s[i]-26;
          }
        }
        if(('a'<=s[i]&&s[i]<='z')){
          if(s[i]+13>'z'){
            s[i]=s[i]-13;
          }else{
            s[i]=s[i]+13;
          }
        }
    }

    cout <<s;    
    return 0;
}