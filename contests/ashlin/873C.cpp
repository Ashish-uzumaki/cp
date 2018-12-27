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
const lli mod = 1e9 + 7;
const lli INF = 1e9 + 7;
lli visit[400001];
map<lli,lli>pi;
map<lli,vector<lli> >g;
lli s,n,d,l,m,x,y,p,q,r,k=0,ans=0;
vector<lli>v,v1;
// map<lli,lli>m;
lli a[1000][1000];
lli b[1000][1000];
int main(){
  _
  cin>>n>>m>>k;
  for(lli i=1;i<=n;i++){
    for(lli j=1;j<=m;j++){
      cin>>a[i][j];
      b[i][j]=a[i][j];
    }
  }
  for(lli i=1;i<=m;i++){
    for(lli j=2;j<=n;j++){
      b[j][i]+=b[j-1][i];
    }
  }
  lli ans1=0,ans2=0;
  for(lli i=1;i<=m;i++){
    lli cnt=0;
    lli maxi=0;
    for(lli j=1;j<=n-k+1;j++){
      if(b[j+k-1][i]-b[j-1][i]>maxi){
        maxi=b[j+k-1][i]-b[j-1][i];
        cnt=b[j-1][i];
      }
    }
    ans2+=cnt;
    ans1+=maxi;
  }
  cout<<ans1<<" "<<ans2<<endl;
}
