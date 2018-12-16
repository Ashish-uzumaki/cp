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
lli ans=0,x;
// int a[N], ans;
vector<lli>v;
map<lli,lli> m;
lli s;
lli k;
bool cmp(lli a,lli b){
  if(m[a]>m[b]){
    return true;
  }
  return false;
}
int main() {
    _
    cin >> n >> k;
    for(lli i=0;i<n;i++){
     cin >> x;
     m[x]++;
    v.pb(x);
   }
   sort(v.begin(),v.end(),cmp);
  }
