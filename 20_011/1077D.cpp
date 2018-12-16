#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define lli long long int
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define se second;
#define fi first;
#define endl '\n';
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int N = 1005505;
const int mod = 1e9 + 7;
const int INF = 1e9 + 7;
int n;
int a[N], ans;
map<lli,lli> cnt;
lli s;
lli k;
int main() {
    _
    cin >> n >> k;
    for(lli i=0;i<n;i++){
     cin >> a[i];
     cnt[a[i]]++;
   }
    lli l = 0, r = n;
    while(l + 1 < r) {
        lli m = (l + r) >> 1;
        lli cc = 0;
        for(auto &x : cnt) {
            cc += x.second / m;
        }
        if(cc >= k) l = m;
        else r = m;
    }
    if(l == 0) {
        for(lli i=0;i<k;i++){
          cout << a[i] << ' ';
        }
        return 0;
    }
    vector<int> res;
    for(auto &x : cnt) {
        lli cc = x.second / l;
        for(lli j=0;j<cc;j++){
          if(res.size() < k){
            res.pb(x.first);
          }
        }
    }
    for(int x  : res) cout << x << ' ';
    return 0;
}
