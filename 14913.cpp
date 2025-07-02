#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,d,k;
    int i=1, flag=0;
    cin >> a>>d>>k;
    if(d>0){
        while(a<=k){
        if(a==k){
            flag=i;
            break;
        }
        a=a+d;
        i++;
    }
    }else {
        while(k<=a){
        if(a==k){
            flag=i;
            break;
        }
        a=a+d;
        i++;
    }
    }
    //k==a+(n-i)d;
    
    if(flag!=0){
        cout << flag << "\n";
    }else {
        cout << "X" <<"\n";
    }
    return 0;
}
