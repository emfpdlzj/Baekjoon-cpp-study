//구간합 prefix sum
#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int psum[100002];
int ret[100002];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, tmp;
    cin >> n >> k;

    cin >> tmp;
    a.push_back(tmp);
    psum[0]=a[0];
    //cout << "psum[0] :" << psum[0] << '\n';
    for (int i = 1; i < n; i++)
    {
        cin >> tmp;
        a.push_back(tmp);
        psum[i] = a[i] + psum[i - 1];
       // cout << "i, psum[i] : "<< i << ", "<< psum[i] <<'\n';
    }

    for(int i=0;i<k;i++){
        ret[k-1]+=a[i];
    }
    //cout << "ret[1] :" << ret[1]<<'\n';
    int max=ret[k-1];
    for (int i = k; i < n; i++)
    {
        ret[i] = psum[i] - psum[i - k];
        if (ret[i] > max)
        {
            max = ret[i];
        }
         //cout << "i, ret[i] : "<< i << ", "<< ret[i] <<'\n';
    }
    cout << max << '\n';
    return 0;
}

