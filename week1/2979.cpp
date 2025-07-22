//counting 배열 문제

#include <bits/stdc++.h>
using namespace std;

int main(){
    int time[102]={0,};
    int sum=0;
    int a,b,c;
    int q1,q2,w1,w2,e1,e2;
    cin >> a>> b>>c;
    cin>>q1>>q2>>w1>>w2>>e1>>e2;
    for(int i=q1;i<q2;i++){
        time[i]++;
    }
    for(int i=w1;i<w2;i++){
        time[i]++;
    }
    for(int i=e1;i<e2;i++){
        time[i]++;
    }
    //위 세번을 반복문으로 처리가능. 
    
    for(int i:time){
        if(i==1){
            sum+=a*1;
        }else if(i==2){
            sum+=2*b;
        }else if(i==3){
            sum+=3*c;
        }
    }
    cout << sum <<'\n';

    return 0;
}