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
lli c[2001][2001];
vector<pair<lli,lli> >v1,v2;
lli n,x,k;
vector<lli>v;
const lli MAX=2001;
const lli MOD=1e9+7;
lli countdiv[MAX],prime[MAX];
lli dp[2002][2002];
int main(){
  _
  cin>>n>>k;
  for(lli i=1;i<=n;i++){
    dp[1][i]=1;
  }
  for(lli i=1;i<k;i++){
    for(lli j=1;j<=n;j++){
      for(lli p=j;p<=n;){
        dp[i+1][p]+=dp[i][j];
        dp[i+1][p]%=MOD;
        p+=j;
      }
    }
  }
  lli ans=0;
  for(lli i=1;i<=n;i++){
    ans+=dp[k][i];
  }
  cout<<(ans)%MOD<<endl;
}
