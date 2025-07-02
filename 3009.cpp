#include <bits/stdc++.h>
using namespace std;
int main(){
    int x[3],y[3];
    for(int i=0;i<3;i++){
        cin >> x[i] >> y[i];
    }
    int xcnt=0,ycnt=0;
    for(int i=0;i<3;i++){
        if(x[i]!=x[0]){
           xcnt=i;
        }
    }
   for(int i=0;i<3;i++){
        if(y[i]!=y[0]){
           ycnt=i;
        }
    }
    
    if((x[0]!=x[1])&&(x[0]!=x[2])){
        xcnt=0;
    }
    if((y[0]!=y[1])&&(y[0]!=y[2])){
        ycnt=0;
    }

    cout<<x[xcnt]<< " "<<y[ycnt] ;

    return 0;
}