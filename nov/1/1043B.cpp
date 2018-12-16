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
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ordered_set<lli>root,nom;//nom.order_of_key(x);
lli visit[100001];
vector<pair<lli,lli> >v1,v2;
// vector<lli>v1,v2;
vector<lli>v,a;
map<lli,lli>m;
lli n,x,maxi=-1;
const lli MOD = 1e9+7;
const lli k=16;
const lli N=1e5;
int main(){
  _
  cin>>n;
  a.push_back(0);
  for(lli i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  for(lli i=1;i<a.size();i++){
    v.push_back(a[i]-a[i-1]);
  }
  vector<lli>ans;
  for (int k = 1; k <= n; ++k) {
        bool ok = 1;
        for (int i = 0; i < n - k; ++i) {
            if (v[i] != v[i + k]) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            ans.pb(k);
        }
    }
    cout<<ans.size()<<endl;
    for(lli i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
    }
}
