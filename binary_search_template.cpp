#include <bits/stdc++.h>
using namespace std;

bool check(int mid){
    // check function
}

int main(){
    // 請注意，這裡為[ll, rr);
    int ll=0, rr=n, mid;
    while (ll<rr){
        int mid=ll+(rr-ll)/2;
        if (check(mid)){
            rr=mid;
        }else{
            ll=mid+1;
        }
    }
    

    return 0;
}