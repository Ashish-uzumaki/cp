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
lli n,m,x,y,k;
vector<lli>v;
map<lli,vector<lli> >g;
lli step,ways;
int main(){
  _
  cin>>n;
  lli cnt=0;
  for(lli i=0;i<n;i++){
    cin>>x;
    v.pb(x);
  }
  for(lli i=1;i<n-1;i++){
      if(v[i]==0 and v[i-1]==1 and v[i+1]==1){
        cnt++;
        v[i+1]=0;
      }
  }
  cout<<cnt<<endl;
}
