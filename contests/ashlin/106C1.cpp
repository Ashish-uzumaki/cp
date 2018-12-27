#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> T pow(T a,T b, lli m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%m; b/=2; a=(a*a)%m; } return ans%m; }
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define se second;
#define fi first;
#define endl '\n';
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const lli mod =998244353;
const lli INF = 1e9 + 7;
lli visit[400001];
map<lli,lli>pi;
map<lli,vector<lli> >g;
lli n,l,x,y,p,c0,d0,q,r,m,ans=0;
vector<string>v,v1;
lli dp[100011][12];
lli a[1001];
lli b[1001];
lli c[1001];
lli d[1001];
lli N=1e18;
int main(){
  _
  cin>>n>>m>>c0>>d0;
  c[0]=c0;
  d[0]=d0;
  for(lli i=1;i<=m;i++){
    cin>>a[i]>>b[i]>>c[i]>>d[i];
  }
  for(lli i=1;i<=n;i++){
    for(lli j=1;j<=m;j++){
      for(lli k=0;k<=a[j]/b[j] && k*c[j]<=i;k++){
        dp[i][j] = max(dp[i][j], dp[i-c[j]*k][j-1] + d[j]*k);
      }
    }
  }
  for(lli i=0;i<=n;i++){
    ans=max(ans,dp[i][m]+((n-i)/c[0])*d[0]);
  }
  cout<<ans<<endl;
}
