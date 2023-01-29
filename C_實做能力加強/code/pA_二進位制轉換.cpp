#include<bits/stdc++.h>
using namespace std;

// declare
int n;

int main(){
    // input
    while (cin >> n){
        string output=""; // output string

        while (n>0){
            if (n%2==0){
                output+='0';
            }else if (n%2==1){
                output+='1';
            }

            n/=2;
        }

        // don't forget reverse output string
        for (int i=output.size()-1 ; i>=0 ; i--){
            cout << output[i];
        }   cout << endl;
    }
    
    return 0;
}