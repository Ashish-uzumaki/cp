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
lli n,m,x,y,k;
vector<lli>v;
map<lli,vector<lli> >g;
lli step,ways;
// lli dp[10000007][4];
lli MOD=1e9+7;
int main(){
  _
  string s;
  lli flag=0;
  cin>>n;
  cin>>s;
  // n=s.length();
  lli idx=n-1;
  for(lli i=0;i<n-1;i++){
    if(s[i]-'0'>s[i+1]-'0'){
      flag=1;
      idx=i;
      break;
    }
  }
    for(lli i=0;i<n;i++){
      if(i!=idx){
        cout<<s[i];
      }
    }
}
