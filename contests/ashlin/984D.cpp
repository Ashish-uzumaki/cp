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
int s,n,d,l,x,r,q;
vector<lli>v;
lli dp[5001][5001];
int main(){
  _
  cin>>n;
  for(lli i=0;i<n;i++){
    cin>>x;
    dp[0][i]=x;
  }
  for(lli i=1;i<n;i++){
    for(lli j=0;j<=n-i;j++){
      dp[i][j]=dp[i-1][j]^dp[i-1][j+1];
    }
  }
  for(lli i=1;i<=n;i++){
    for(lli j=0;j<n-i;j++){
      dp[i][j] = max({dp[i][j],dp[i-1][j],dp[i-1][j+1]});
    }
  }
  cin>>q;
  for (lli i = 0; i < q; i++) {
   cin >> l >> r;
   --l;
   lli len = r - l - 1;
   cout << dp[len][l] << '\n';
 }
}
