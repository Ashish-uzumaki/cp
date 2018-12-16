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
lli N = 1005505;
lli mod = 1e9 + 7;
lli INF = 1e9 + 7;
lli n,q,x,l,r;
vector<lli>v,v1,qu;
lli a[1005505];
vector<pair<lli,lli> >pr,pr1;
int main(){
  cin>>n>>q;
  for(lli i=0;i<n;i++){
    cin>>x;
    v.pb(x);
  }
  for(lli i=0;i<q;i++){
    cin>>l>>r;
    a[l]+=1;
    a[r+1]-=1;
    pr1.pb(mp(l,r));
  }
  for(lli i=1;i<=n;i++){
    a[i]+=a[i-1];
  }
  for(lli i=1;i<=n;i++){
    pr.pb(mp(a[i],i));
  }
  // cout<<endl;
  sort(pr.begin(),pr.end());
  sort(v.begin(),v.end());
  for(lli i=1;i<=n;i++){
    a[pr[i-1].second]=v[i-1];
    v1.pb(v[i-1]);
  }
  for(lli i=1;i<=n;i++){
    a[i]+=a[i-1];
  }
  lli ans=0;
  for(lli i=0;i<q;i++){
    ans+=(a[pr1[i].second]-a[pr1[i].first-1]);
  }
  cout<<ans<<endl;
}
