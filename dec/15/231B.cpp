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
const lli N = 1005505;
const lli mod = 1e9 + 7;
const lli INF = 1e9 + 7;
lli n,d,l,x;
vector<lli>v;
lli a[110];
int main(){
  cin>>n>>d>>l;
  lli lef=n/2;
  lli rig=n/2;
  if(n%2==1){
    lef+=1;
  }
  if(lef-rig*l>d or d>lef*l-rig){
    cout<<-1;
    return 0;
  }
  x=n/2;
  for(lli p=x;p<=lef*l;p++){
    lli q=p-d;
    // cout<<p<<" "<<q<<endl;
    if(p>=lef and q>=rig){
      lli z=p/lef;
      lli y=p%lef;
      lli z1=q/rig;
      lli y1=q%rig;
      for(lli i=0;i<lef;i++){
        if(i<y){
          a[2*i+1]=z+1;
        }
        else{
          a[2*i+1]=z;
        }
        if(i<y1){
          a[2*i+2]=z1+1;
        }
        else{
          a[2*i+2]=z1;
        }
      }
      break;
    }
  }
  for(lli i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
}
