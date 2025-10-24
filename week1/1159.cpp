//counting 배열, map or 배열로 푸는문제.. 
//cnt [a-'a']를 생각해야돼 
//ret=i+'a'처럼 역으로 문자를 숫자화 시켜보는 생각을 해야한다. 
#include <bits/stdc++.h>
using namespace std;
vector<string> v;
int flag = 0;
int n;

int arr[26] = {
    0,
};


int main()
{
    int arr[26]={0,};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    if (n >= 5){
        for(string i: v){
            int j=(int)i[0]-'a';
            arr[j]++; //arr[i-'a']++
        }
        for(int i=0;i<26;i++){
            if(arr[i]>=5){
                cout << (char)(i+'a');
                flag=1;
            }
        }
    }
        
    if (flag == 0)
        cout << "PREDAJA" << '\n';
    return 0;
}