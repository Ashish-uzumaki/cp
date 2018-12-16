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
lli n;
const lli MOD = 1e9+7;
vector<pair<lli,lli> >ans;
lli sliding_window(lli d){
  lli i;
  
}
bool check(lli x,lli l){
  lli mini=INT_MAX;
  for(lli i=l;i<x;i++){
    mini=min(mini,v[i]);
  }
  for(lli i=l;i<x;i++){
    if(v[i]%mini!=0){
      return false;
    }
  }
  return true;
}
lli binary_search_on_answer(){
  lli l=0,r=n+1;
  while(l<=r){
    lli mid=(l+r)/2;
    if(check(mid)){
      l=mid+1;
    }
    else{
      r=mid-1;
    }
  }
  return r;
}
int main(){
  lli x;
  cin>>n;
  for(lli i=0;i<n;i++){
    cin>>x;
    v.pb(x);
  }
  lli maxi=-1;
  for(lli i=0;i<n;i++){
    lli l=i;
    lli r=binary_search_on_answer(l);

  }
  lli req=0;
  vector<lli>fin;
  for(lli i=0;i<ans.size();i++){
    if(ans[i].first==maxi){
      fin.pb(ans[i].second+1);
    }
  }
  cout<<fin.size()<<" "<<maxi<<endl;
  for(lli i=0;i<fin.size();i++){
    cout<<fin[i]<<" ";
  }
}
