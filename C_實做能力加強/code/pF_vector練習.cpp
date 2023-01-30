#include<bits/stdc++.h>
using namespace std;

// declare
int n, k;
int a, b;

// 儲存答案
vector<int> v[1000005]; // v[i] 代表 i 的所有朋友

int main(){
    // fast IO
    ios::sync_with_stdio(0);
    cin.tie(0);

    // input
    cin >> n >> k;
    for (int i=0 ; i<k ; i++){
        cin >> a >> b;
        // 因為 a b 互為朋友關係，所以兩人的 vector 都要加上對方
        v[a].push_back(b);
        v[b].push_back(a);
    }

    // output
    for (int i=1 ; i<=n ; i++){
        // 別忘了排序，每個 v[i] 都是一個 vector，所以仍然可以 sort
        sort(v[i].begin(), v[i].end());

        for (int j=0 ; j<v[i].size() ; j++){
            cout << v[i][j];

            if (j!=v[i].size()-1){
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}