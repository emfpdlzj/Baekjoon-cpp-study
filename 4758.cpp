#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        double speed,weight,strength;
        int flag=0;
        cin>> speed>>weight>>strength ;
        if(speed==0&&weight==0&&strength==0){
            break;
        }
        if(speed<= 4.5&& weight>=150 && strength>=200 ){
            cout<< "Wide Receiver ";
            flag++;
        }
        if(speed<= 6.0&& weight>=300 && strength>=500 ){
            cout<< "Lineman ";
            flag++;
        }
        if(speed<= 5.0&& weight>=200 && strength>=300 ){
            cout<< "Quarterback ";
            flag++;
        }
        if(flag==0)
            cout << "No positions";
        cout<< "\n";
    }
    return 0;
}