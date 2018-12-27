#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define se second;
#define fi first;
#define endl '\n';
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int N = 101000;
const int K = 20;
const int mod = 1e9 + 7;
const int INF = 1e9 + 7;
int s,n,d,l,x,r,q,t,k,cnt=N;
vector<int>v;
vector<int>divi[N];
int ch[2][N*K*K];
int mini[N*K*K];
bool mark[N];
int add(int u,int x){
  mini[u]=min(mini[u],x);
  for(int i=K-1;i>=0;i--){
    bool bit=(x&(1<<i));
    if(!ch[bit][u]){
      ch[bit][u]=cnt++;//assign a pointer when next pointer is null
    }
    u=ch[bit][u];//ptr to next node
    mini[u]=min(mini[u],x);
  }
}
int query(int id,int x,int y){
    if(mini[id]>y){
      return -1;
    }
    int ans=0;
    for(int i=K-1;i>=0;i--){
      bool p=(x&(1<<i));
      p=!p;
      if(mini[ch[p][id]]<=y){
        id=ch[p][id];
        ans+=p*(1<<i);
      }
      else{
        id=ch[!p][id];
        ans+=(!p)*(1<<i);
      }
    }
    return ans;
}
int main(){
  _
  int u;
  cin>>q;
	for(int i=0;i<N*K*K;i++){
    mini[i]=N;
  }
	for(int i=1;i<N;i++){
    for(int j=i;j<N;j+=i){
      divi[j].push_back(i);
    }
  }
  while(q--){
    cin>>t>>x;
    if(t==1){
      if(mark[x]){
        continue;
      }
      mark[x]=1;
      for(auto u:divi[x]){
        add(u,x);
      }
    }
    else{
      cin>>k>>s;
      if(x%k){
        cout<<"-1\n";
        continue;
      }
			cout<<query(k,x,s-x)<<"\n";
    }
  }
  return 0;
}
