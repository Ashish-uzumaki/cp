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
int main(){
  lli n,x1,y1,x=0,y=0;
  vector<lli>v;
  cin>>n;
  string s;
  cin>>s;
  cin>>x1>>y1;
  v.push_back(abs(x-x1)+abs(y-y1));
  if(n<x1+y1){
    cout<<-1;
    return 0;
  }
  for(lli i=0;i<n;i++){
    if(s[i]=='U'){
      if(x1<0){
        x+=1;
      }
      else{
        x-=1;
      }
    }
    else if(s[i]=='R'){
      if(y1<0){
        y+=1;
      }
      else{
        y-=1;
      }
    }
    else if(s[i]=='L'){
      if(y1<0){
        y-=1;
      }
      else{
        y+=1;
      }
    }
    else{
      if(x1<0){
        x-=1;
      }
      else{
        x+=1;
      }
    }
    cout<<x<<" "<<y<<endl;
    v.push_back(abs(y-y1)+abs(x-x1));
  }
  for(lli i=1;i<=n;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  lli k=0;
  for(lli i=n-1;i>0;i--){
    if(v[i]==n-i-1){
      cout<<v[i];
      break;
    }
  }
}
