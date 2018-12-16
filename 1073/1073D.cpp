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
lli a[300002];
int main(){
  lli n,t;
  cin>>n>>t;
  lli sum=0;
  for(lli i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
  lli ans=0;
  lli cnt=n;
  while(cnt){
       lli tmp=t/sum;
       t%=sum;
       ans+=cnt*tmp;
       for(lli x=0;x<n;x++){
           if(a[x]==-1){
             continue;
           }
           if(a[x]>t){
               cnt--;
               sum-=a[x];
               a[x]=-1;
           }
           else{
               t-=a[x];
               ans++;
           }
       }
   }
     cout<<ans<<"\n";
}
