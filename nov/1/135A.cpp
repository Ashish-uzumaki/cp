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
lli l,r,k,tsum,x;
const lli MOD = 1e9+7;
int main(){
  lli n;
  cin>>n;
  lli maxi=INT_MIN;
  lli cnt=0;
  for(lli i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
    if(x>maxi){
      maxi=x;
    }
    if(x==1){
      cnt++;
    }
  }
  for(lli i=0;i<n;i++){
    if(v[i]==maxi){
      v[i]=1;
      break;
    }
  }
  sort(v.begin(),v.end());
  if(cnt==n){
    v[n-1]=2;
  }
  for(lli i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
}
