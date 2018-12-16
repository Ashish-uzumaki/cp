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
lli n,m,x,y,k;
vector<lli>v;
lli dp[500001][26];
string s;
lli neg[100001];
lli pos[100001];
int main(){
  _
  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
  lli n;
  cin>>n;
  for(lli i=1;i<=n;i++){
    cin>>x;
    v.pb(x);
    if(x<0){
      neg[i]=1;
    }
    else if(x>0){
      pos[i]=1;
    }
  }
  for(lli i=1;i<=n;i++){
    neg[i]+=neg[i-1];
    pos[n-i]+=pos[n-i+1];
  }
  lli ans=INT_MAX;
  for(lli i=1;i<n;i++){
    ans=min(ans,abs(i-neg[i])+abs(pos[i+1]-(n-i)));
  }
  cout<<ans;
}
