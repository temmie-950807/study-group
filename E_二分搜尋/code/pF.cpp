#include <bits/stdc++.h>
using namespace std;

// declare
int n, t, k;
vector<int> v;

bool check(long long mid){
    long long total=0;

    for (auto x : v){
        total+=mid/x;
    }

    // cout << "total: " << total << endl;
    return total>=t;
}

void solve1(){
    // input
    cin >> n >> t;
    for (int i=0 ; i<n ; i++){
        cin >> k;
        v.push_back(k);
    }

    // process
    long long ll=1, rr=1, ans;
    while (!check(rr)){
        rr<<=1;
    }
    rr++;
    
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