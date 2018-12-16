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
const lli k=17;
const lli N=3e5+10;
lli grt[N][k+1];
lli arr[N];
lli range_query(lli a,lli b){
  lli p=log2(b-a+1);
  return __gcd(grt[a][p],grt[b-(1<<p)+1][p]);
}
int main(){
  lli n,l,q,r;
  cin>>n;
  for(lli i=0;i<n;i++){
    cin>>arr[i];
  }
  // sparse_table();
  for(lli i=0;i<n;i++){
    grt[i][0]=arr[i];
  }
  for(lli j=1;j<=k;j++){
    for(lli i =0 ;i+(1<<j)<=n;i++){
      grt[i][j] = __gcd(grt[i][j-1],grt[i+(1<<(j-1))][j-1]);
    }
  }
  for(lli i=0;i<n;i++){
    l=0;
    r=i;
    lli strt;
    lli mid,endi;
    while(l<=r){
      mid=(l+r)/2;
      if(range_query(mid,i)%arr[i]==0){
        strt=mid;
        r=mid-1;
      }
      else{
        l=mid+1;
      }
    }
    l=i;
    r=n-1;
    while(l<=r){
      mid=(l+r)/2;
      if(range_query(i,mid)%arr[i]==0){
        endi=mid;
        l=mid+1;
      }
      else{
        r=mid-1;
      }
    }
    v.pb(mp(endi-strt+1,strt));
  }
  sort(v.rbegin(),v.rend());
  lli maxi=v[0].first;
  vector<lli>ans;
  for(lli i=0;i<v.size();i++){
    if(v[i].first==maxi and m[v[i].second]==0){
      ans.pb(v[i].second);
      m[v[i].second]=1;
    }
  }
  sort(ans.begin(),ans.end());
  cout<<ans.size()<<" "<<maxi-1<<endl;
  for(lli i=0;i<ans.size();i++){
    cout<<ans[i]+1<<" ";
  }
}
