#include<bits/stdc++.h>
using namespace std;

// declare
int n;
int a, b;

// 儲存答案
vector<int> v;
int total=0;

int main(){
    // input
    cin >> n;
    
    // process
    for (int i=0 ; i<n ; i++){
        cin >> a >> b;
        if (b>100){
            v.push_back(a);
            total+=(b-100)*5;
        }
    }

    // output
    sort(v.begin(), v.end());
    for (auto x : v){
        cout << x << " ";
    }
    cout << total << endl;
    return 0;
}