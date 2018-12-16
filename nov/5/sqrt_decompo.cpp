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
// map<lli,lli>m;
lli n,x;
const lli MOD = 1e9+7;
lli k;
const lli N=1e5;
lli a[N];
lli Sqrt_arr[N];
void update(lli pos,lli val){
  Sqrt_arr[pos/k] = Sqrt_arr[pos/k]-a[pos]+val;
  a[pos]=val;
  // cout<<Sqrt_arr[pos/k]<<" ";
}

lli query(lli l, lli r){
  lli sum=0;
  lli i=l;
  while ((i)%k!=0 and i<=r) {
    sum+=a[i];
    i++;
  }
  while(i+k<=r){
    sum+=Sqrt_arr[i/k];
    i+=k;
  }
  while(i<=r){
    sum+=a[i];
    i++;
  }
  return sum;
}
int main(){
  _
  cin>>n;
  k=ceil(sqrt(n));
  for(lli i=0;i<n;i++){
    cin>>x;
    update(i,x);
    // cout<<Sqrt_arr[i]<<" ";
  }
  cout<<k<<endl;
  for(lli i=0;i<n;i++){
    cout<<Sqrt_arr[i]<<" ";
  }
  cout<<endl;
  lli q;
  cin>>q;
  for(lli i=0;i<q;i++){
    lli l,r;
    cin>>l>>r;
    cout<<query(l,r)<<endl;
  }
}
