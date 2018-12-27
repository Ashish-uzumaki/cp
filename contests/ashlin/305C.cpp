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
const lli mod = 1e9 + 7;
const lli INF = 1e9 + 7;
lli visit[400001];
map<lli,lli>pi;
map<lli,vector<lli> >g;
lli s,n,d,l,x,a,y,p,q,r,k=0,ans=0;
vector<lli>v,v1;
map<lli,lli>m;
lli b[1001];
int main(){
  _
  cin>>n;
  bitset<1001>sum(0);
  for(lli j=0;j<n;j++){
    cin>>x;
    for(lli i=0;i<1001;i++){
      b[i]=0;
    }
    b[x]=1;
    lli c=0;
    for(lli i = 0; i < 1001 ; i++){
      y=sum[i];
      sum[i] = ((sum[i] ^ b[i]) ^ c); // c is carry
      c = ((y & b[i]) | (y & c)) | (b[i] & c);
   }
  }
  string s2=sum.to_string();
  lli flag=0;
  for(lli i=0;i<s2.length();i++){
    if(flag==1){
      if(s2[i]=='0'){
        ans++;
      }
    }
    if(s2[i]=='1'){
      flag=1;
    }
  }
  cout<<ans<< endl;
}
