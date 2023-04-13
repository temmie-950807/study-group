#include <bits/stdc++.h>
using namespace std;

// declare
int n, k, a, b;
vector<int> v;

void solve1(){
    // input
    cin >> n >> k;
    for (int i=0 ; i<n ; i++){
        cin >> a;
        v.push_back(a);
    }

    // process
    sort(v.begin(), v.end());

    // queries
    for (int i=0 ; i<k ; i++){
        cin >> b;
        cout << upper_bound(v.begin(), v.end(), b)-v.begin() << endl;
    }
}

bool check(int mid){
    return v[mid]>b;
}

void solve2(){
    // input
    cin >> n >> k;
    for (int i=0 ; i<n ; i++){
        cin >> a;
        v.push_back(a);
    }

    // process
    sort(v.begin(), v.end());

    // queries
    for (int i=0 ; i<k ; i++){
        cin >> b;

        int ll=0, rr=n, ans=n;
        while (ll<rr){
            int mid=ll+(rr-ll)/2;
            // cout << "mid: " << mid << endl;

            if (check(mid)){
                rr=mid;
                ans=mid;
            }else{
                ll=mid+1;
            }
        }

        cout << ans << endl;
    }

}

void solve3(){
    // input
    cin >> n >> k;
    for (int i=0 ; i<n ; i++){
        cin >> a;
        v.push_back(a);
    }

    // process
    sort(v.begin(), v.end());

    // queries
    for (int i=0 ; i<k ; i++){
        cin >> b;
        cout << lower_bound(v.begin(), v.end(), b)-v.begin() << endl;
    }
}

int main(){
    solve3();
    return 0;
}
