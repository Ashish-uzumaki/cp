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
unordered_map<lli,lli>m;
const lli N=4e5+1;
lli a[N+1];
unordered_map<lli,lli>cnt;
lli fin[N+1];
// lli Sqrt_arr[N];
lli dp[N+1];
lli ans=0;
int main(){
  _
  cin>>n>>l;
  lli c[n+1];
  for(lli i=0;i<n;i++){
    cin>>c[i];
  }
  for(lli i=1;i<n;i++){
    c[i]=min(c[i],2*c[i-1]);
  }
  lli ans=5e18+1;
  lli sum=0;
  for(lli i=n-1;i>=0;i--){
    lli p=1<<i;
    lli d=l/p;
    sum+=(c[i]*d);
    l=l-(d<<i);
    if(l>0){
      ans=min(ans,sum+c[i]);
    }
    else{
      ans=min(ans,sum);
    }
  }
  cout<<ans<<endl;
}
