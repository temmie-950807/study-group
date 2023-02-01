#include <bits/stdc++.h>
using namespace std;

// declare
string s;
int total=0; // 儲存所有數字

int main(){
    // input
    cin >> s;

    // get total
    for (int i=0 ; i<s.size() ; i++){
        total+=s[i]-'0';
        // char    | '0' | '1' | '2' | '3' | '4' | '5' | '6' | '7' | '8' | '9' |
        // ascii   |  48 |  49 |  50 |  51 |  52 |  53 |  54 |  55 |  56 |  57 |
        // 減去'0'  =============================================================
        // value   |   0 |   1 |   2 |   3 |   4 |   5 |   6  |  7 |   8 |   9 |
    }

    // output
    cout << total << endl;
    
    return 0;
}