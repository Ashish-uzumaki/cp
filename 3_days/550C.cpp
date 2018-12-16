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
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ordered_set<lli>root,nom;//nom.order_of_key(x);
lli visit[100001];
// vector<pair<lli,lli> >v1,v2;
vector<lli>v,v2;
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
  string s;
  cin>>s;
  n=s.length();
  for(lli i=0;i<s.length();i++){
    v.pb(s[i]-'0');
  }
  for(lli i=0;i<n;i++){
    if(v[i]%8==0){
      cout<<"YES"<<endl;
      cout<<v[i]<<endl;
      return 0;
    }
  }
  for(lli i=0;i<n;i++){
    for(lli j=i+1;j<n;j++){
        lli p=v[i]*10+v[j];
        if(p%8==0){
          cout<<"YES"<<endl;
          cout<<p<<endl;
          return 0;
      }
    }
  }
  for(lli i=0;i<n;i++){
    for(lli j=i+1;j<n;j++){
      for(lli k=j+1;k<n;k++){
        lli p=v[i]*100+v[j]*10+v[k];
        if(p%8==0){
          cout<<"YES"<<endl;
          cout<<p<<endl;
          return 0;
        }
      }
    }
  }
  cout<<"NO"<<endl;
}
