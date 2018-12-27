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
template<typename T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<typename T> void chmin(T& a, T b) { if (a > b) a = b; }
template<typename T> void chmax(T& a, T b) { if (a < b) a = b; }
const lli mod = 1e9 + 7;
const lli INF = 1e9 + 7;
lli visit[400001];
map<lli,lli>pi;
map<lli,vector<lli> >g;
lli s,n,d,l,x,a,y,p,q,r,k=0,ans=0;
vector<lli>v,v1;
map<lli,lli>m;
lli b[1001];

int main(){
  _
  deque<lli>v;
  cin>>n;
  for(lli i=0;i<n;i++){
    cin>>x;
    v.pb(x);
  }
  lli bits=0,maxi=0;
  while(!v.empty()){
    x=v.front();
    lli cnt=0;
    while(!v.empty() and v.front()==x){
      v.pop_front();
      cnt++;
    }
    if(cnt%2==1){
      bits++;
    }
    chmax(maxi, x + 1);
    while(cnt >= 2) {
           v.push_front(x + 1);
           cnt -= 2;
       }
  }
  cout << maxi - bits << endl;
}
