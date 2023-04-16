#include <bits/stdc++.h>
using namespace std;

// declare
int n, k, a, l, r;
vector<int> v;

void solve1(){
    // input
    cin >> n;
    for (int i=0 ; i<n ; i++){
        cin >> a;
        v.push_back(a);
    }

    // process
    sort(v.begin(), v.end());

    // queries
    cin >> k;
    for (int i=0 ; i<k ; i++){
        cin >> l >> r;
        cout << upper_bound(v.begin(), v.end(), r)-lower_bound(v.begin(), v.end(), l) << " ";
    }
}

bool check1(int mid){
    return v[mid]>r;
}

bool check2(int mid){
    return v[mid]>=l;
}

void solve2(){
    // input
    cin >> n;
    for (int i=0 ; i<n ; i++){
        cin >> a;
        v.push_back(a);
    }

    // process
    sort(v.begin(), v.end());

    // queries
    cin >> k;
    for (int i=0 ; i<k ; i++){
        cin >> l >> r;

        int pos1=n, pos2=n;
        int ll=0, rr=n;

        // upper_bound
        while (ll<rr){
            int mid=ll+(rr-ll)/2;
            if (check1(mid)){
                rr=mid;
                pos1=mid;
            }else{
                ll=mid+1;
            }
        }

        // lower_bound
        ll=0, rr=n;
        while (ll<rr){
            int mid=ll+(rr-ll)/2;
            if (check2(mid)){
                rr=mid;
                pos2=mid;
            }else{
                ll=mid+1;
            }
        }

        // output
        cout << pos1-pos2 << " ";
    }
}

int main(){
    solve2();
    return 0;
}