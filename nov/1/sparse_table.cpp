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
vector<pair<lli,lli> >v;
map<lli,lli>m;
lli n;
const lli MOD = 1e9+7;
const lli k=16;
const lli N=1e5;
lli mini[k][N+1];
lli grt[k][N+1];
lli arr[N];
void sparse_table(){
  for(lli i=0;i<n;i++){
    grt[i][0]=arr[i];
  }
  for(lli j=1;j<=k;j++){
    for(lli i =0 ;i+(1<<j)<=n;i++){
      grt[i][j]  = __gcd(grt[i][j-1],grt[i+(1<<(j-1))][j-1]);
    }
  }
}
lli range_query(lli a,lli b){
  lli p=log2(b-a+1);
  return __gcd(grt[a][p],grt[b-(1<<p)+1][p]);
}
