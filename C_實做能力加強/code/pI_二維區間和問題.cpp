#include <bits/stdc++.h>
#define int long long
using namespace std;

// declare
string s;
int n, q;
int ay, ax, by, bx;

int v[1005][1005];
int pre[1005][1005];

signed main(void){
    // input
    cin >> n >> q;
    for (int i=1 ; i<=n ; i++){
        cin >> s;
        for (int j=1 ; j<=n ; j++){
            if (s[j-1]=='*'){
                v[i][j]=1;
            }else{
                v[i][j]=0;
            }
            pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+v[i][j];
        }
    }

    // queries
    for (int i=0 ; i<q ; i++){
        cin >> ay >> ax >> by >> bx;
        cout << pre[by][bx]-pre[by][ax-1]-pre[ay-1][bx]+pre[ay-1][ax-1] << endl;
    }

    return 0;
}