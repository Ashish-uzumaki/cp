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
vector<lli>v;
lli l,r,k,tsum;
const lli MOD = 1e9+7;
lli strt;
void dfs(lli x,lli p,lli d){
  visit[x]=1;
  g1[x]=p;
  if(x==d){
    return;
  }
  for(lli i=0;i<g[x].size();i++){
    if(v[g[x][i]]!=1){
      dfs(g[x][i],x,d);
    }
  }
}
int main(){
  cin>>n;
  for(lli i=0;i<n;i++){
    cin>>x>>y;
    g[x].pb(y);
    g[y].pb(x);
  }
  cin>>m;
  for(lli i=0;i<m;i++){
    map<lli,lli>g1;
    dfs()//nah chuck it it will be o(n*m) so it won't work;
  }
}
