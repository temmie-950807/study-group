#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3,unroll-loops")
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define int long long
#if !LOCAL
#define endl "\n"
#endif
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> order_set;
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

// debugger
// ===================================
template<typename T>void debug(const T &v,int h,int w,string sv=" "){for(int i=0;i<h;i++){cout<<v[i][0];for(int j=1;j<w;j++)cout<<sv<<v[i][j];cout<<endl;}};
template<typename T>void debug(const T &v,int n,string sv=" "){if(n!=0)cout<<v[0];for(int i=1;i<n;i++)cout<<sv<<v[i];cout<<endl;};
template<typename T>void debug(const vector<T>&v){debug(v,v.size());}
template<typename T>void debug(const vector<vector<T>>&v){for(auto &vv:v)debug(vv,vv.size());}
template<typename T>void debug(stack<T> st){while(!st.empty()){cout<<st.top()<<" ";st.pop();}cout<<endl;}
template<typename T>void debug(queue<T> st){while(!st.empty()){cout<<st.front()<<" ";st.pop();}cout<<endl;}
template<typename T>void debug(deque<T> st){while(!st.empty()){cout<<st.front()<<" ";st.pop_front();}cout<<endl;}
template<typename T>void debug(priority_queue<T> st){while(!st.empty()){cout<<st.top()<<" ";st.pop();}cout<<endl;}
template<typename T>void debug(priority_queue<T, vector<int>, greater<int>> st){while(!st.empty()){cout<<st.top()<<" ";st.pop();}cout<<endl;}
template<typename T>void debug(const set<T>&v){for(auto z:v)cout<<z<<" ";cout<<endl;}
template<typename T>void debug(const multiset<T>&v){for(auto z:v)cout<<z<<" ";cout<<endl;}
template<typename T,typename V>void debug(const map<T,V>&v){for(auto z:v)cout<<"["<<z.first<<"]="<<z.second<<",";cout<<endl;}
template<typename T,size_t size>void debug(const array<T, size> &a){for(auto z:a)cout<<z<<" ";cout<<endl;}
// ===================================

// declare
const int MAX_SIZE = 1e5+5;
const int INF = 9e18;
const int MOD = 1e9+7;
const double EPS = 1e-6;

int n, k, tmp;
vector<int> aa, bb;

bool check(int mid){ // 現在搜尋的值
    int total=0;
    for (int i=0 ; i<n ; i++){
        // 尋找有多少數字小於等於 mid
        // 等價於 pB 的題目
        total+=upper_bound(bb.begin(), bb.end(), mid-aa[i])-bb.begin();
    }
    return total>=k;
}

void solve1(){
    
    // input
    cin >> n >> k;
    for (int i=0 ; i<n ; i++){
        cin >> tmp;
        aa.push_back(tmp);
    }
    for (int i=0 ; i<n ; i++){
        cin >> tmp;
        bb.push_back(tmp);
    }

    // process
    sort(aa.begin(), aa.end());
    sort(bb.begin(), bb.end());

    // binary search
    int ll=2, rr=2e9+1, ans;
    while (ll<rr){
        int mid=ll+(rr-ll)/2;

        if (check(mid)){
            rr=mid;
        }else{
            ll=mid+1;
        }
    }

    // output
    cout << ll << endl;

    return;
}

signed main(void){
    fastio;
    
    int t=1;
    while (t--){
        solve1();
    }
    return 0;
}