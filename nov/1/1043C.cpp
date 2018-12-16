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
vector<pair<lli,lli> >v1,v2;
// vector<lli>v1,v2;
vector<lli>v;
map<lli,lli>m;
lli n,x,maxi=-1;
lli a[1001];
int main(){
  _
  string s;
  cin>>s;
  n=s.length();
  for(lli i=0;i<n-1;i++){
    if(s[i]!=s[i+1]){
      a[i]=1;
    }
  }
  if(s[n-1]=='a'){
    a[n-1]=1;
  }
  for(lli i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}
