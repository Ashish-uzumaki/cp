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
ordered_set<lli>root,nom;//nom.order_of_key(x);
lli visit[100001];
vector<pair<lli,lli> >v1,v2;
lli n,m,x,y,k;
vector<lli>v;
map<lli,vector<lli> >g;
lli step,ways;
lli dfs(lli x,lli st){
  if(st==n){
    return ways;
  }
  st++;
  for(lli i=0;i<g[x].size();i++){
    if(g[x][i]==0){
      ways++;
    }
    if(st<=2 and g[x][i]==0){
      continue;
    }
    else{
      dfs(g[x][i],st);
    }
  }
  // cout<<ways<<endl;
}
int main(){
  _
  cin>>n;
  for(lli i=0;i<=3;i++){
    g[i].pb((i+1)%4);
    g[i].pb((i+2)%4);
    g[i].pb((i+3)%4);
  }
  dfs(0,0);
  cout<<ways<<endl;
}
