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
lli visit[100001];
vector<pair<lli,lli> >v1,v2;
int n,m,x,y,k;
vector<lli>v;
string s;
unordered_map<lli,lli>dp;
lli recur(lli x){
  if(x==0){
    return 0;
  }
  if(dp[x]!=0){
    return dp[x];
  }
  dp[x]=max(x,recur(x/2)+recur(x/3)+recur(x/4));
  return dp[x];
}
int main(){
  _
while(scanf("%d",&n)==1) printf("%lld\n",recur(n));

}
