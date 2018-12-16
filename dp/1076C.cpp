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
ordered_set<lli>root,nom;//nom.order_of_key(x);
vector<pair<lli,lli> >v1,v2;
lli n,m,x,y,k,t;
vector<lli>v;
map<lli,vector<lli> >g;
lli step,ways;
// lli dp[10000007][4];
lli MOD=1e9+7;
int main(){
  _
  cin>>t;
  for(lli i=0;i<t;i++){
    lli d;
    cin>>d;
    if(d*d-4*d<0){
      cout<<'N'<<endl
    }
    else{
      double x=sqrt(d*d-4*d);
      double a=((d-x)*1.0)/2;
      double b=d-a;
      cout<<'Y'<<" ";
      cout<<setprecision(15)<<b<<" "<<a<<endl;
      }
    }
  }
