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
int main(){
  _
  cin>>n>>k;
  string s;
  cin>>s;
  memset(dp,-1,sizeof(dp));
  for(lli i=0;i<k;i++){
    dp[0][i]=0;
  }
  //iterate through the string
  for(lli i=0;i<n;i++){
    //iterate throgh the possible k
    for(lli j=0;j<k;j++){
      //check its in k or not
      if(dp[i][j]>=0){
        //for every k for ith index compute for i+1 index
        for(lli l=0;l<k;l++){
          if(l!=j){
            lli nxt=dp[i][j]+(s[i]-'A'!=l);
            if(dp[i+1][l]<0 || dp[i+1][l]>nxt){
              dp[i+1][l]=nxt;
              // prev[i+1][l]=j;
            }
          }
        }
      }
      for(lli i=0;i<=n;i++){
        cout<<s[i]<<':';
        for(lli j=0;j<k;j++){
          cout<<dp[i][j]<<" ";
        }
        cout<<endl;
      }
      cout<<endl;
    }
  }
  // cout<<endl

}
