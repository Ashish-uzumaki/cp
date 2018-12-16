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
#define endl '\n';
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ordered_set<lli>root,nom;//nom.order_of_key(x);
lli visit[100001];
vector<pair<lli,lli> >v1,v2;
lli n,m,x,y,k,a,b,t,cnt=0;
vector<lli>v;
map<lli,vector<lli> >g;
lli step,ways;
void recur(lli size,lli fact){
  if(size == 1){
    v.pb(fact);
    return;
  }
  else if(size == 2){
    v.pb(fact),v.pb(fact*2);
    return;
  }
  else if(size == 3){
    v.pb(fact),v.pb(fact),v.pb(fact*3);
    return;
  }
  for(lli i=1;i<=size;i++){
    if(i%2==1){
      v.pb(fact);
    }
  }
  recur(size/2,fact*2);
}
int main(){
  _
  cin>>n;
  recur(n,1);
  for(lli i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
