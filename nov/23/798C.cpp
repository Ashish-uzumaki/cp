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
#define endl '\n';
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ordered_set<lli>root,nom;//nom.order_of_key(x);
lli visit[100001];
vector<pair<lli,lli> >v1,v2;
lli n,m,x,y,k,a,b,t,cnt=0;
vector<lli>v;
map<lli,vector<lli> >g;
lli step,ways;
int main(){
  _
  cin>>n;
  for(lli i=0;i<n;i++){
    cin>>x;
    v.pb(x);
  }
  if(n==2){
    lli x = __gcd(abs(v[0]),abs(v[1]));
    lli y = __gcd(abs(v[0]-v[1]),abs(v[0]+v[1]));
    if(x>1 or y>1){
      cout<<"YES"<<endl;
      cout<<1<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    return 0;
  }
  for(lli i=1;i<v.size()-1;i++){
    if(__gcd(abs(v[i]),abs(v[i-1]))!=1){
      continue;
    }
    else{
      if(__gcd(abs(v[i]-v[i+1]),abs(v[i-1]))==1){
        cout<<"NO";
        return 0;
      }
      else{
        cnt++;
        lli temp=v[i];
        v[i]=temp-v[i+1];
        v[i+1]=temp+v[i];
      }
    }
  }
  if(__gcd(abs(v[n-1]),abs(v[n-2]))>1){
    cout<<"YES"<<endl;
    cout<<cnt<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}
