#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    long long  n,k,l,sum=0;
    cin >> n>>k;
    for(long long i=0;i<n;i++){
        long long tmp;
        cin >> tmp;
        v.push_back(tmp);
        sum+=tmp;
    }
    l=sum/k;
    long long begin=1,end=l,mid,ans=0;
    while(begin<=end){
        long long p=0;
        mid=(begin+end)/2;
        for(long long i=0;i<n;i++){
            p+=v[i]/mid;
        }
        if(p>=k){
            ans=mid;
            begin=mid+1;
        }else { // p<k
            end=mid-1;
        }
    }
    cout << ans;

    return 0;
}
