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
lli n,m,x;
vector<lli>b,order;
map<lli,lli>d,w;
int main(){
  _
  cin>>n>>m;
  for(lli i=1;i<=n;i++){
    cin>>x;
    w[i]=x;
  }
  for(lli i=1;i<=m;i++){
    cin>>x;
    b.pb(x);
    if(d[x]==0){
      order.pb(x);
    }
    d[x]+=1;
  }
  lli ans=0;
  for(lli i=0;i<b.size();i++){
    for(lli j=0;j<order.size();j++){
      if(order[j]==b[i]){
        order.erase(order.begin() + j);
        order.insert(order.begin(),b[i]);
        break;
      }
      ans+=w[order[j]];
    }
  }
  cout<<ans<<endl;
}
