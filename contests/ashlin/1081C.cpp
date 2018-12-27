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
lli s,n,d,l,x,a,y,p,q,r,m,k=0;
vector<lli>v,v1;
lli b[2001];
lli c[2010][2010];
void ncr(){
  for(int i = 0; i < 2002; ++i){
          c[i][0] = 1;
          for(int j = 1; j <= i; ++j){
              c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % mod;
          }
      }
  }

int main(){
  _
  cin>>n>>m>>k;
  ncr();
  k++;
  n-=k;
  lli ans=(m*pow(m-1,k-1,mod))%mod;
  ans=(ans*c[n+k-1][k-1])%mod;
  cout<<ans<<endl;
}
