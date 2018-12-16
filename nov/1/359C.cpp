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
vector<lli>v;
map<lli,lli>m;
lli l,r,k,tsum;
const lli MOD = 1e9+7;
lli power(lli x, lli y, lli p)
{
  lli res = 1;
  x = x % p;
  while (y > 0){
    if (y & 1)
    res = (res*x) % p;
    y = y>>1;
    x = (x*x) % p;
  }
  return res;
}
bool check(lli k,lli x){
  lli d=power(x,k,MOD);
  lli z=(tsum*power(d,MOD-2,MOD))%MOD;
  cout << k << " " << z << " " << tsum << " " << d <<endl;
  return (tsum==(z*d)%MOD);
}
lli binary_search_on_answer(lli n,lli x){
  lli l=0,r=n;
  while(l<=r){
    lli mid=(l+r)/2;
      // cout << l << "----" << r << " " << mid << "->>>>>>>>" << check(mid,x) << endl;
    if(check(mid,x)){
      l=mid+1;
    }
    else{
      r=mid-1;
    }

  }
  return r;
}
lli gcd(lli a, lli b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main(){
  lli n,x,y;
  cin>>n>>x;
  lli sum=0;
  for(lli i=0;i<n;i++){
    cin>>y;
    v.push_back(y);
    tsum+=power(x,y,MOD);
    tsum%=MOD;
    sum+=y;
  }
  lli z=binary_search_on_answer(sum,x);
  cout << z << endl;
  cout<<power(x,z,MOD);
}
