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
#define se second
#define fi first
#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ordered_set<lli>root,nom;//nom.order_of_key(x);
lli visit[100001];
map<string,lli>mat;
vector<lli>v1;
// vector<lli>v;
int main(){
  _
  lli n,k,m,x,y;
  cin>>n>>k>>m;
  vector<string>v;
  string s;
  for(lli i=0;i<n;i++){
    cin>>s;
    v.push_back(s);
  }
  for(lli i=0;i<n;i++){
    cin>>x;
    v1.push_back(x);
  }
  map<lli,lli>grp;
  for(lli i=1;i<=k;i++){
    cin>>x;
    grp[i]=INT_MAX;
    for(lli j=0;j<x;j++){
      cin>>y;
      grp[i]=min(grp[i],v1[y-1]);
      mat[v[y-1]]=i;
    }
  }
  lli ans=0;
  for(lli i=0;i<m;i++){
    cin>>s;
    ans+=grp[mat[s]];
  }
  cout<<ans<<endl;
}
