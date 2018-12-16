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
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ordered_set<lli>root,nom;//nom.order_of_key(x);
lli visit[100001];
// vector<pair<lli,lli> >v1,v2;
vector<lli>v,v2;
lli n,x,y,l,q,r,h;
map<lli,vector<lli>>g,g1;
const lli MOD = 1e9+7;
lli k;
map<lli,lli>m;
const lli N=4e5+1;
lli a[N+1];
map<pair<lli,lli>,lli>mat;
lli fin[N+1];
// lli Sqrt_arr[N];
lli cnt=0;
void dfs(lli x){
  visit[x]=1;
  for(auto i:g[x]){
    if(visit[i]!=1){
      dfs(i);
      m[x]+=m[i];
    }
  }
}
int main(){
  _
  cin>>n;
  if(n==1){
    cout<<-1;
    return 0;
  }
  for(lli i=0;i<n-1;i++){
    cin>>x>>y;
    g[x].pb(y);
    g[y].pb(x);
    m[x]=1;
    m[y]=1;
  }
  if(n%2==1){
    cout<<-1;
    return 0;
  }
  dfs(1);
  lli ans=-1;
  for(lli i=1;i<=n;i++){
    if(m[i]%2==0){
      ans++;
    }
  }
  cout<<ans<<endl;
}
