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
lli s,n,d,l,x,a,b,y,k=0;
vector<lli>v;
lli ans=0;
void dfs(lli x){
  visit[x]=1;
  for(lli i=0;i<g[x].size();i++){
    if(visit[g[x][i]]!=1){
      pi[g[x][i]]=x;
      dfs(g[x][i]);
    }
  }
}
void dfs1(lli r,lli z){
  visit[r]=1;
  for(lli i=0;i<g[r].size();i++){
    if(visit[g[r][i]]!=1 and g[r][i]!=z){
      k++;
      dfs1(g[r][i],z);
    }
  }
}
int main(){
  _
  cin>>n>>x>>y;
  for(lli i=0;i<n-1;i++){
    cin>>a>>b;
    g[a].pb(b);
    g[b].pb(a);
  }
  dfs(x);
  lli cur=y;
  while(cur!=x){
    v.pb(cur);
    cur=pi[cur];
  }
  v.pb(x);
  for(lli i=1;i<=n;i++){
    visit[i]=0;
  }
  dfs1(v[0],v[1]);
  lli n1=k;
  for(lli i=0;i<=n;i++){
    visit[i]=0;
  }
  k=0;
  dfs1(v[v.size()-1],v[v.size()-2]);
  lli n2=k;
  ans=n*(n-1)-((n2+1)*(n1+1));
  cout<<ans<<endl;
}
