#include <bits/stdc++.h>
using namespace std;

// declare
long long n, k, tmp;
vector<int> a, b;

bool check(long long mid){
    long long total=0;

    for (long long i=1 ; i<=n ; i++){
        total+=min(n*i, mid)/i;
    }

    return total>=k;
}

void solve1(){
    // input
    cin >> n >> k;
    for (int i=0 ; i<n ; i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i=0 ; i<n ; i++){
        cin >> tmp;
        b.push_back(tmp);
    }

    // process
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long ll=1, rr=2e9+1, ans;
    // cout << "ll: " << ll << " rr: " << rr << endl;
    while (ll<rr){
        long long mid=ll+(rr-ll)/2;
        // cout << "mid: " << mid << endl;

        if (check(mid)){
            rr=mid;
            ans=mid;
        }else{
            ll=mid+1;
        }
    }

    // output
    cout << ans << endl;
    return;
}

int main(){
    solve1();
}