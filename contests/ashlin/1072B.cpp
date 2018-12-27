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
lli s,n,d,l,x,y,p,q,r,k=0,ans=0;
vector<lli>a,b,t,t1;
int main(){
  _
  cin>>n;
  for(lli i=0;i<n-1;i++){
    cin>>x;
    a.pb(x);
  }
  for(lli i=0;i<n-1;i++){
    cin>>x;
    b.pb(x);
  }
  lli flag=0;
  for(lli j=0;j<=3;j++){
    for(lli k=j;k<=3;k++){
      if((j|k)==a[0] and (j&k)==b[0]){
          flag=1;
          t.pb(j);
          t.pb(k);
          t1.pb(k);
          t1.pb(j);
          break;
        }
      }
    }
  if(flag==0){
    cout<<"NO";
    return 0;
  }
  for(lli i=1;i<n-1;i++){
      flag=0;
      lli j=t[t.size()-1];
      for(lli k=0;k<=3;k++){
        if((j|k)==a[i] and (j&k)==b[i]){
          t.pb(k);
          flag=1;
          break;
        }
      }
      for(lli i=0;i<t.size();i++){
        cout<<t[i]<<" ";
      }
      cout<<endl;
      if(flag==0){
        cout<<"NO";
        break;
      }
  }
  for(lli i=1;i<n-1;i++){
      flag=0;
      lli j=t1[t1.size()-1];
      for(lli k=0;k<=3;k++){
        if((j|k)==a[i] and (j&k)==b[i]){
          t1.pb(k);
          flag=1;
          break;
        }
      }
      for(lli i=0;i<t1.size();i++){
        cout<<t1[i]<<" ";
      }
      cout<<endl;
      if(flag==0){
        cout<<"NO";
        break;
      }
  }
  if(flag==1){
    cout<<"YES"<<endl;
    if(t.size()==n){
      for(lli i=0;i<t.size();i++){
        cout<<t[i]<<" ";
      }
    }
    else{
      for(lli i=0;i<t1.size();i++){
        cout<<t1[i]<<" ";
      }
    }
  }
}
