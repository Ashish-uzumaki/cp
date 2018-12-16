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
vector<char>v;
lli dp[500001][26];
string s;
lli a[50010];
int main(){
  _
  cin>>s;
  for(lli i=0;i<s.length();i++){
    if(s[i]=='a'){
      a[i+1]=1;
    }
  }
  n=s.length();
  for(lli i=1;i<=n;i++){
    a[i]+=a[i-1];
  }
  lli ans=INT_MAX;
  for(lli i=1;i<=n-2;i++){
    for(lli j=i+2;j<=n;j++){
      ans=min(ans,abs(i-a[i])+abs((j-i-1)-(a[j-1]-a[i]))+n-j-a[n]-a[j-1]);
    }
  }
  cout<<ans;
}
