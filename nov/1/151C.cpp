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
vector<lli >v;
map<lli,lli>m;
lli n;
const lli MOD = 1e9+7;
const lli k=17;
const lli N=3e5+10;
lli grt[N][k+1];
lli arr[N];
lli divis(lli q){
  lli w=2;
  while (w*w<=q){
    if (q%w==0){
      return w;
    }
    ++w;
  }
return 0;
}

int main(){
  lli n;
  cin>>n;
  lli x=divis(n);
  if(x==0){
    cout<<1<<endl;
    cout<<0<<endl;
  }
  else{
    lli y=divis(n/x);
    if(y==0){
      cout<<2<<endl;
    }
    else{
      cout<<1<<endl;
      cout<<x*y<<endl;
    }
  }
}
