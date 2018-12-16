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
const lli N = 1005505;
const lli mod = 1e9 + 7;
const lli INF = 1e9 + 7;
lli n,x;
vector<lli>v;
lli ans[1005505];
map<lli,vector<lli> >m,g;
void BFS(lli s) {
    queue<lli> que;
    que.push(s);
    while(!que.empty()){
        s = que.front();
        que.pop();
        for (lli i = 0; i < g[s].size(); i++){
            que.push(g[s][i]);
            if(ans[s]==0){
              ans[g[s][i]]=1;
          }
        }
    }
}
int main(){
  _
  cin>>n;
  for(lli i=0;i<n;i++){
    cin>>x;
    v.pb(x);
  }
  for(lli i=0;i<n;i++){
    lli j=i;
    while(j>=0){
      if(v[j]>v[i]){
        m[v[i]].pb(v[j]);
        g[v[j]].pb(v[i]);
      }
      j-=v[i];
    }
    j=i;
    while(j<n){
      if(v[j]>v[i]){
        m[v[i]].pb(v[j]);
        g[v[j]].pb(v[i]);
    }
    j+=v[i];
  }
}
  vector<lli>src;
  for(lli i=0;i<n;i++){
    if(m[v[i]].size()==0){
      src.pb(v[i]);
    }
  }
  for(lli i=0;i<src.size();i++){
    BFS(src[i]);
  }
  for(lli i=0;i<n;i++){
    if(ans[v[i]]==0){
      cout<<'B';
    }
    else{
      cout<<'A';
    }
  }
}
