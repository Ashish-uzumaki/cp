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
lli n,x,m,y,l,q,r;
map<lli,vector<lli>>g,g1;
const lli MOD = 1e9+7;
lli k;
const lli N=4e5+1;
lli a[N+1];
lli cnt[N+1];
lli fin[N+1];
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
  if(cnt[a[pos]]==a[pos]){
    ans-=1;
  }
  cnt[a[pos]]+=1;
  if(cnt[a[pos]]==a[pos]){
    ans+=1;
  }
}
void del(lli pos){
  if(cnt[a[pos]]==a[pos]){
    ans-=1;
  }
  cnt[a[pos]]-=1;
  if(cnt[a[pos]]==a[pos]){
    ans+=1;
  }
}
void quer(struct que query[]){
  sort(query,query+q,cmp);
    lli templ=query[0].left,tempr=query[0].left-1;
    for(lli i=0;i<q;i++){
      lli curr_l=query[i].left;
      lli curr_r=query[i].right;
      while(templ>curr_l){
        templ--;
        ins(templ);
      }
      while(templ<curr_l){
        del(templ);
        templ++;
      }
      while(tempr<curr_r){
        tempr++;
        ins(tempr);
      }
      while(tempr>curr_r){
        del(tempr);
        tempr--;
      }
      fin[query[i].idx]=ans;
    }
}
