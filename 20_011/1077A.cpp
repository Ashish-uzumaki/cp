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
vector<lli>v,ans;
map<lli,vector<lli> >g;
lli step,ways;
lli pre[200010],suf[200010];
int main(){
  _
  cin>>n;
  lli sum=0;
  for(lli i=1;i<=n;i++){
    cin>>x;
    v.pb(x);
    sum+=x;
    pre[i]=max(pre[i-1],x);
  }
  for(lli i=n;i>=1;i--){
    suf[i]=max(suf[i+1],v[i-1]);
  }
  for(lli i=1;i<=n;i++){
    lli maxi=max(pre[i-1],suf[i+1]);
    lli cmp=sum-v[i-1]-maxi;
    if(maxi==cmp){
      ans.pb(i);
    }
  }
  cout<<ans.size()<<endl;
  for(lli i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}
