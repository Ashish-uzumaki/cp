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
lli n,d,l,x,a,y,p,q,r,m,k=0;
vector<string>v,v1;
lli dp[100001][2];
lli c[100001];
lli N=1e18;
int main(){
  _
  cin>>n;
  string s;
  for(lli i=0;i<=n;i++){
    dp[i][0]=N;
    dp[i][1]=N;
  }
  for(lli i=0;i<n;i++){
    cin>>x;
    c[i+1]=x;
  }
  v.pb("ash");
  for(lli i=0;i<n;i++){
    cin>>s;
    v.pb(s);
  }
  dp[1][0]=0;
  dp[1][1]=c[1];
  for(lli i=2;i<=n;i++){
    string s1,s2,s0;
    for(lli j=0;j<=1;j++){
        s2=v[i];
        if(j==1){
          reverse(s2.begin(),s2.end());
        }
        // s1=reverse(v[i-1].begin(),v[i-1].end());
        s0=v[i-1];
        s1=s0;
        reverse(s1.begin(),s1.end());
        if(s2>=s1){
          dp[i][j]=min(dp[i][j],dp[i-1][1]+j*c[i]);
        }
        if(s2>=s0){
          dp[i][j]=min(dp[i][j],dp[i-1][0]+j*c[i]);
        }
    }
  }
  // for(lli i=0;i<=n;i++){
  //   cout<<dp[i][0]<<" "<<dp[i][1]<<endl;
  // }
  lli y=min(dp[n][0],dp[n][1]);
  if(y>=N){
    cout<<-1;
  }
  else{
    cout<<y<<endl;
  }
}
