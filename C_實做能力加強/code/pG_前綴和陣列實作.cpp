#include <bits/stdc++.h>
#define int long long
using namespace std;

// declare
int n, tmp;
vector<int> v(1);

signed main(void){
    // input
    cin >> n;
    for (int i=1 ; i<=n ; i++){
        cin >> tmp;
        v.push_back(tmp+v[i-1]);
    }

    // output
    for (int i=1 ; i<=n ; i++){
        cout << v[i] << " ";
    }   cout << endl;

    return 0;
}