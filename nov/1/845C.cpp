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
vector<pair<lli,lli> >v1,v2,v;
// vector<lli>v1,v2;
// vector<lli>v;
// map<lli,lli>m;
lli n,x,y,m,maxi=-1;
const lli MOD = 1e9+7;
const lli k=16;
const lli N=1e5;
map<lli,lli>per;
lli a[11][100001];
lli pos[11][N+1];
lli lim[N*10+11];
bool cmp(const pair<lli,lli> &a,const pair<lli,lli> &b){
  if(a.first==b.first){
    return (a.second < b.second);
  }
    return a.first<b.first;

}
int main(){
  _
  cin>>n;
  for(lli i=0;i<n;i++){
    cin>>x>>y;
    v.pb(mp(x,y));
  }
  sort(v.begin(),v.end(),cmp);
  pair<lli,lli> tv1,tv2;
  lli flag=0;
  tv1=mp(-1,-1);
  tv2=mp(-1,-1);
  for(lli i=0;i<n;i++){
    if(tv1.second>=v[i].first){
      if(tv2.second>=v[i].first){
        flag=1;
        break;
      }
      else{
        tv2=v[i];
      }
    }
    else{
      tv1=v[i];
    }
    // cout<<"tv1:"<<tv1.first<<" "<<tv1.second<<"----"<<"tv2:"<<tv2.first<<" "<<tv2.second<<endl;
  }
  if(flag==0){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}
