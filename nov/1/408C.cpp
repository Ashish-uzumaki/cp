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
map<lli,lli>m;
lli n;
const lli MOD = 1e9+7;
const lli k=16;
const lli N=1e5;
lli mini[k][N+1];
lli grt[k][N+1];
lli arr[N];
int main(){
  lli a,b;
  cin>>a>>b;
  for(lli i=-a;i<=a;i++){
    for(lli j=-a;j<=a;j++){
      if(j==0 or i==0){
        continue;
      }
      if(i*i+j*j==a*a){
        v1.pb(mp(i,j));
      }
    }
  }
  for(lli i=-b;i<=b;i++){
    for(lli j=-b;j<=b;j++){
      if(j==0 or i==0){
        continue;
      }
      if(i*i+j*j==b*b){
        v2.pb(mp(i,j));
      }
    }
  }
  for(auto x1:v1){
    for(auto x2:v2){
      if(x1.first==x2.first or x1.second==x2.second){
        continue;
      }
      if((x1.first-x2.first)*(x1.first-x2.first)+(x1.second-x2.second)*(x1.second-x2.second)!=a*a+b*b){
        continue;
      }
      cout<<"YES"<<endl;
      cout<<0<<" "<<0<<endl;
      cout<<x1.first<<" "<<x1.second<<endl;
      cout<<x2.first<<" "<<x2.second<<endl;
      return 0;
    }
  }
  cout<<"NO"<<'\n';
}
