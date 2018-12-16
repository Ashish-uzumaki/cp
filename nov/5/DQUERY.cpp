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
lli n,x,m,y,l,q,r;
map<lli,vector<lli>>g,g1;
const lli MOD = 1e9+7;
lli k;
const lli N=4e5+1;
const lli A=1e6+11;
lli a[N+1];
// unordered_map<lli,lli>cnt;
set<lli>st;
lli cnt[A+1];
lli fin[A+1];
// lli Sqrt_arr[N];
lli ans=0;
struct que{
  lli left;
  lli right;
  lli idx;
}query[N];
bool cmp(que n1,que n2){
    if((n1.left/m)==(n2.left/m)){
      return n1.right<n2.right;
    }
    return (n1.left/m)<(n2.left/m);
}
void ins(lli pos){
  cnt[a[pos]]+=1;
  if(cnt[a[pos]]==1){
    ans+=1;
  }
}
void del(lli pos){
  cnt[a[pos]]-=1;
  if(cnt[a[pos]]==0){
    ans-=1;
  }
}
int main(){
  _
  cin>>n;
  for(lli i=0;i<n;i++){
    cin>>a[i];
  }
  cin>>q;
  for(lli i=0;i<q;i++){
    cin>>l>>r;
    query[i].left=l-1;
    query[i].right=r-1;
    query[i].idx=i;
  }
  m=sqrt(n)+1;
  sort(query,query+q,cmp);
  lli prel=query[0].left,prer=query[0].left-1;
  for(lli i=0;i<q;i++){
    lli curr_l=query[i].left;
    lli curr_r=query[i].right;
    while(prel>curr_l){
      prel--;
      ins(prel);
    }
    while(prel<curr_l){
      del(prel);
      prel++;
    }
    while(prer<curr_r){
      prer++;
      ins(prer);
    }
    while(prer>curr_r){
      del(prer);
      prer--;
    }
    fin[query[i].idx]=ans;
  }
  for(lli i=0;i<q;i++){
    cout<<fin[i]<<'\n';
  }
}
