#include <bits/stdc++.h>
using namespace std;

// declare
long long n, k;

bool check(long long mid){
    long long total=0;

    for (long long i=1 ; i<=n ; i++){
        total+=min(n*i, mid)/i;
    }

    return total>=k;
}

void solve1(){
    // input
    cin >> n;
    k=n*n/2+1;

    // process
    long long ll=1, rr=n*n+1, ans;
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