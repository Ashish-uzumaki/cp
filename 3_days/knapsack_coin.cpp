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
lli n,x,y,l,q,r,h,s;
map<lli,vector<lli>>g,g1;
const lli MOD = 1e9+7;
lli k;
unordered_map<lli,lli>m;
const lli N=1e3+1;
lli dp[N+1][N+1];
unordered_map<lli,lli>cnt;
lli a[N+1];
// lli Sqrt_arr[N];
lli ans=0;
int main(){
  _
  cin>>n>>s;
  for(lli i=0;i<n;i++){
    cin>>a[i];
  }
  for(lli i=0;i<n;i++){
    dp[i]=0;
  }
  for(lli i=1;i<=s;i++){
    lli mini=INT_MAX;
    for(lli j=0;j<n;j++){
      if(a[j]<=i){
        mini=min(mini,dp[i-a[j]]+1);
      }
    }
    dp[i]=mini;
  }
  cout<<dp[s]<<endl;
}
