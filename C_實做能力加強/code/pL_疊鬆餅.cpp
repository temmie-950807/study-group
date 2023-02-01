// https://codeforces.com/contest/1501/submission/162349602
#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define int long long
using namespace std;
 
signed main(void){
	fastio;
	
    int t, n, tmp, k=0;

    cin >> t;
    while (t--){
        cin >> n;
        vector<int> v(n+1, 0);

        for (int i=0 ; i<n ; i++){
            cin >> tmp;
            if (tmp != 0){
                v[min(i+1, n)]--;
                v[max((int)0, i-tmp+1)]++;
            }
        }

        k = 0;
        for (int i=0 ; i<n ; i++){
            k += v[i];

            if (k) cout << "1 ";
            else cout << "0 ";
        }   cout << "\n";
    }

    
    return 0;
}