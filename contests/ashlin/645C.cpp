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
const lli mod = 1e9 + 7;
const lli INF = 1e9 + 7;
lli visit[400001];
map<lli,lli>pi;
map<lli,vector<lli> >g;
lli s,n,d,l,x,a,y,p,q,r,k=0,ans=INT_MAX;
vector<lli>v,v1;
map<lli,lli>m;
int main(){
  _
  cin>>n>>k;
  string str;
  cin>>str;
  v.pb(0);
  for(lli i=0;i<n;i++){
    if(str[i]=='0'){
      v.pb(1);
    }
    else{
      v.pb(0);
    }
  }
  for(lli i=2;i<v.size();i++){
    v[i]+=v[i-1];
  }
  for(lli i=0;i<n;i++){
    if(str[i]=='1'){
      continue;
    }
    lli low = 0, high = n;
    while (low < high) {
      lli mid = (low + high) >> 1;
      lli from = max(0*1ll, i - mid);
      lli to = min(n - 1, i + mid);
      lli cnt = v[to + 1] - v[from];
      if (cnt >= k + 1) {
        high = mid;
      } else {
        low = mid + 1;
      }
    }
    ans = min(ans, low);
  }
  cout<<ans<<endl;
}
