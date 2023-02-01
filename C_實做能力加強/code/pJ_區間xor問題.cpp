#include <bits/stdc++.h>
#define int long long
using namespace std;

// declare
int n, q, tmp;
int l, r;
vector<int> v(1), pre(1);

signed main(void){
    // input
    cin >> n >> q;
    for (int i=1 ; i<=n ; i++){
        cin >> tmp;
        v.push_back(tmp);
        pre.push_back(tmp^pre[i-1]);
    }

    // queries
    for (int i=0 ; i<q ; i++){
        cin >> l >> r;
        cout << (pre[r]^pre[l-1]) << endl;
    }

    return 0;
}