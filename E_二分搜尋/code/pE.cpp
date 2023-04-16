#include <bits/stdc++.h>
using namespace std;

// declare
long long w, h, n;

bool check(long long mid){
    // cout << "get: " << (mid/w)*(mid/h) << endl;
    return (mid/w)*(mid/h)>=n;
}

void solve1(){
    // input
    cin >> w >> h >> n;

    // process
    // 這裡非常關鍵，請思考為什麼要這樣設置左右界
    long long ll=1, rr=1, ans=0;
    while (!check(rr)){
        rr<<=1;
    }
    rr++; // 別忘了定義的區間範圍

    int ll=1, rr=1e18+1;
    
    while (ll<rr){
        long long mid=ll+(rr-ll)/2;

        if (check(mid)){
            ans=mid;
            rr=mid;
        }else{
            ll=mid+1;
        }
    }

    // output
    cout << ans << endl;
}

int main(){
    solve1();
    return 0;
}
