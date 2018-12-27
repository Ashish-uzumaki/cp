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
lli s,n,d,l,x,a,b,y,p,q,r,m,k=0,ans=0;
int main(){
  _
  cin>>n>>m>>k;
  ans=((n-1)+(m-1))*2;
  for(lli i=1;i<k;i++){
    n-=4;
    m-=4;
    ans= ans + (n+m-2)*2;
  }
  cout<<ans<<endl;
}
