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
const lli N = 1005505;
const lli mod = 1e9 + 7;
const lli INF = 1e9 + 7;
lli s,n,d,l,x;
vector<lli>v;
int main(){
  _
  cin>>n>>s;
  for(lli i=1;i<=n;i++){
    v.pb(i);
  }
  lli x=lower_bound(v.begin(),v.end(),s)-v.begin();
  if(x==n){
    x-=1;
  }
  lli y=v[x];
  // cout<<x<<endl;
  lli d=s/y;
  if(s%y>0){
    cout<<d+1<<endl;
  }
  else{
    cout<<d<<endl;
  }
  // cout<<"hi";
}
