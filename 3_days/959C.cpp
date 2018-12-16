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
#define se second
#define fi first
#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ordered_set<lli>root,nom;//nom.order_of_key(x);
lli visit[100001];
map<string,lli>mat;
vector<lli>v1;
map<lli,vector<lli> >g;
// vector<lli>v;
int main(){
  _
  lli n;
  cin>>n;
  if(n<=5){
    cout<<-1<<endl;
  }
  else{
    cout<<1<<" "<<2<<endl;
    cout<<2<<" "<<3<<endl;
    cout<<2<<" "<<4<<endl;
    for(lli i=5;i<=n;i++){
      cout<<1<<" "<<i<<endl;
    }
  }
  for(lli i=2;i<=n;i++){
    cout<<1<<" "<<i<<endl;
  }
}
