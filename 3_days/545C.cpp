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
// vector<lli>v1,v2;
lli n,x,y,l,q,r,h;
map<lli,vector<lli>>g,g1;
const lli MOD = 1e9+7;
lli k;
unordered_map<lli,lli>m;
const lli N=4e5+1;
lli a[N+1];
unordered_map<lli,lli>cnt;
lli fin[N+1];
// lli Sqrt_arr[N];
lli ans=0;
int main(){
  _
  cin>>n;
  v1.pb(mp(0,0));
  for(lli i=0;i<n;i++){
    cin>>x>>h;
    v1.pb(mp(x,h));
  }
  sort(v1.begin(),v1.end());
  lli ans=1;
  lli pre=v1[1].first;
  lli frn=v1[1].second;
  for(lli i=2;i<n;i++){
    lli lef=v1[i].first-v1[i].second;
    lli righ=v1[i].first+v1[i].second;
    if(lef>pre){
      ans+=1;
      pre=v1[i].first;
    }
    else if(righ<v1[i+1].first){
      ans+=1;
      pre=righ;
    }
    else{
      pre=v1[i].first;
    }
  }
  if(n!=1){
    ans+=1;
  }
  cout<<ans<<endl;
}
