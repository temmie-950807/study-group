#include<bits/stdc++.h>
using namespace std;

// declare
int t;
string s;

int main(){
    cin >> t;

    while (t--){
        // input
        cin >> s;

        // process
        for (int i=0 ; i<s.size() ; i++){
            s[i]+=3;

            if (s[i]>'Z'){
                s[i]-=26;
            }
        }

        // output
        for (int i=0 ; i<s.size() ; i++){
            cout << s[i];
        }   cout << endl;
    }
    
    return 0;
}