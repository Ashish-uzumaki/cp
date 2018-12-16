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
const lli MOD = 1e9+7;
const lli k=16;
const lli N=1e5;
int main(){
  _
  lli n;
  cin>>n;
  lli sum=0;
  for(lli i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
    sum+=x;
    if(maxi<x){
      maxi=x;
    }
  }
  for(lli i=maxi;i<=1000;i++){
    lli temp=i*n;
    if(temp-sum>sum){
      cout<<i;
      return 0;
    }
  }

}
