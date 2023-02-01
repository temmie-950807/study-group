#include <bits/stdc++.h>
using namespace std;

// declare
int x, y, z;
int mi=10000; // 儲存最小的答案

int main(){
    // input
    cin >> x >> y >> z;

    // find minimum value
    mi=min(mi, (x^(y|z))^(x+y));
    mi=min(mi, (x^(z|y))^(x+z));

    mi=min(mi, (y^(x|z))^(y+x));
    mi=min(mi, (y^(z|x))^(y+z));
    
    mi=min(mi, (z^(x|y))^(z+x));
    mi=min(mi, (z^(y|x))^(z+y));

    // output
    cout << mi << endl;
    
    return 0;
}