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
#define endl '\n';
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
lli N = 1005505;
lli mod = 1e9 + 7;
lli INF = 1e9 + 7;
lli n,q,x,l,r,y;
int main(){
  _
  cin>>n>>r;
  for(lli i=0;i<n;i++){
    cin>>x;
    if(x>=r){
      cout<<"Good boi"<<endl;
    }
    else{
      cout<<"Bad boi"<<endl;
    }
  }
}
