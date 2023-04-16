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
        if (binary_search(v.begin(), v.end(), b)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}

bool check(int mid){
    return v[mid]>=b;
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

        int ll=0, rr=n, ans=0;
        while (ll<rr){
            int mid=ll+(rr-ll)/2;
            // cout << "ll: " << ll << " rr: " << rr << endl;

            if (check(mid)){
                rr=mid;
                ans=mid;
            }else{
                ll=mid+1;
            }
        }

        // cout << "ans: " << ans << endl;
        if (v[ans]==b){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}

int main(){
    solve2();
    return 0;
}