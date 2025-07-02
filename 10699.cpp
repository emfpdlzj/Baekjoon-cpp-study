#include <bits/stdc++.h>
using namespace std;

int main() {
    time_t timer = time(NULL);
    struct tm* t;
    t = localtime(&timer); 
    int h=t->tm_mday;
    cout << t->tm_year + 1900 << "-";
    printf("%02d-", t->tm_mon + 1);
    if(t->tm_hour>15){
        h=t->tm_mday+1;
    }
    printf("%02d", h);
    return 0;
}
