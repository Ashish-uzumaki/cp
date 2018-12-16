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
lli n,x,h,w,t;
vector<lli>v;
lli dp[110][110];
lli a[110][110];
int main(){
  cin>>t;
  while(t--){
    cin>>h>>w;
    for(lli i=0;i<h;i++){
      for(lli j=0;j<w;j++){
        cin>>a[i][j];
      }
    }
    for(lli i=0;i<w;i++){
      dp[0][i]=a[0][i];
    }
    for(lli i=0;i<h-1;i++){
      for(lli j=0;j<w;j++){
        if(j+1<w){
          dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+a[i+1][j+1]);
        }
        if(j-1>=0){
          dp[i+1][j-1]=max(dp[i+1][j-1],dp[i][j]+a[i+1][j-1]);
        }
        dp[i+1][j]=max(dp[i+1][j],dp[i][j]+a[i+1][j]);
      }
    }
    lli ans=-1;
    for(lli i=0;i<w;i++){
      ans=max(ans,dp[h-1][i]);
    }
    cout<<ans<<endl;
  }
}
