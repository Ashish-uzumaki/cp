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
map<lli,lli>m;
int main(){
  lli n;
  cin>>n;
  lli a[n+1],b[n+1];
  for(lli i=0;i<n;i++){
    cin>>a[i];
    m[a[i]]=i+1;
  }
  for(lli i=0;i<n;i++){
    cin>>b[i];
  }
  lli pre=0;
  for(lli i=0;i<n;i++){
    if(pre<m[b[i]]){
      cout<<m[b[i]]-pre<<" ";
      pre=m[b[i]];
    }
    else{
      cout<<0<<" ";
    }
  }
}
