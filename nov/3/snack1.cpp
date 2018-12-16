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
// map<lli,lli>m;
// lli n,x;
const lli MOD = 1e9+7;
const lli k=16;
const lli N=1e5;
int main(){
  _
  lli t;
  cin>>t;
  while(t--){
    lli n,m,x;
    cin>>n>>m;
    vector<lli>alice,bob;
    lli sum1=0,sum2=0,flag1=0,flag2=0;
    for(lli i=0;i<n;i++){
      cin>>x;
      if(x!=0){
        alice.pb(x);
        sum1+=x;
      }
    }
    for(lli i=0;i<m;i++){
      cin>>x;
      if(x!=0){
        bob.pb(x);
        sum2+=x;
      }
    }
    n=alice.size();
    m=bob.size();
    sort(alice.begin(),alice.end());
    sort(bob.begin(),bob.end());
    if(n!=m){
      cout<<"Alice"<<endl;
    }
    else{
      if(n==m){
        lli k=0;
        for(lli i=0;i<n;i++){
          if(bob[i]==alice[i]){
            k++;
          }
        }
        if(k==n){
          cout<<"Bob"<<endl;
        }
        else{
          cout<<"Alice"<<endl;
        }
      }
      else{
        cout<<"Alice"<<endl;
      }
    }
  }

}
