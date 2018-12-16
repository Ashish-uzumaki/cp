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
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ordered_set<lli>root,nom;//nom.order_of_key(x);
lli visit[100001];
vector<pair<lli,lli> >v1,v2;
// vector<lli>v1,v2;
vector<lli>v;
// map<lli,lli>m;
lli n,x,m,maxi=-1;
const lli MOD = 1e9+7;
const lli k=16;
const lli N=1e5;
map<lli,lli>per;
lli a[11][100001];
lli pos[11][N+1];
lli lim[N*10+11];
int main(){
  _
  cin>>m>>n;
  for(lli i=1;i<=n;i++){
    for(lli j=1;j<=m;j++){
      cin>>a[i][j];
    }
  }
  for(lli i=1;i<=m;i++){
    per[a[1][i]]=i;
  }
  for(lli i=1;i<=n;i++){
    for(lli j=1;j<=m;j++){
      a[i][j]=per[a[i][j]];
    }
  }
  for(lli i=1;i<=m;i++){
    lim[i]=m;
  }
  for(lli i=1;i<=n;i++){
      lli k=1;
      for(lli j=1;j<=m;j++){
        if(j>k){
          k++;
        }
          while(k<m){
            if(a[i][k+1]==a[i][k]+1){
              k++;
            }
            else{
              break;
            }
          }
        lim[a[i][j]]=min(lim[a[i][j]],a[i][k]);//taking the minimumof all possible increasing intervals starting from index j
      }
    }
    lli ans=0;
    lli i=1;
    while(i<=m){
      lli j=lim[i]-i+1;
      ans+=((j)*(j+1))/2;
      i=lim[i]+1;
    }
    cout<<ans<<endl;
}
