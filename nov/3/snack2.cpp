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
lli n,m;
const lli MOD = 1e9+7;
const lli k=16;
const lli N=1e5;
lli mini[k][N+1];
lli grt[k][N+1];
lli arr[N];
int main(){
  _
  lli t,x,y;
  cin>>t;
  while(t--){
    cin>>n>>m>>x>>y;
    lli x1,y1;
    lli x2,y2;
    lli ans=0;
    for(lli i=1;i<=n;i++){
      for(lli j=1;j<=m;j++){
        lli temp=n*m;
        x1=i,y1=j;
        lli flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag6=0,flag7=0,flag8=0;
        lli left_up=-1,right_up=-1,left_down=-1,right_down=-1,up=-1,down=-1,left=-1,right=-1;
        while(x1>=1 and y1>=1){
          x1-=1;
          y1-=1;
          if(flag1==1){
            temp+=1;
          }
          else{
            temp-=1;
          }
          if(x1==x and y1==y){
            flag1=1;
          }
        }
        x1=i,y1=j;
        while(x1>=1 and y1<=m){
          x1-=1;
          y1+=1;
          // right_up+=1;
          if(flag2==1){
            temp+=1;
          }
          else{
            temp-=1;
          }
          if(x1==x and y1==y){
            flag2=1;
          }
        }
        x1=i,y1=j;
        while(x1<=n and y1>=1){
          x1+=1;
          y1-=1;
          // temp-=1;
          // left_down+=1;
          if(flag3==1){
            temp+=1;
          }
          else{
            temp-=1;
          }
          if(x1==x and y1==y){
            flag3=1;
          }
        }
        x1=i,y1=j;
        while(x1<=n and y1<=m){
          x1+=1;
          y1+=1;
          // temp-=1;
          // right_down+=1;
          if(flag4==1){
            temp+=1;
          }
          else{
            temp-=1;
          }
          if(x1==x and y1==y){
            flag4=1;
          }
        }
        x1=i,y1=j;
        while(y1<=m){
          y1+=1;
          right+=1;
          // temp-=1;
          if(flag5==1){
            temp+=1;
          }
          else{
            temp-=1;
          }
          if(x1==x and y1==y){
            flag5=1;
          }
        }
        x1=i,y1=j;
        while(y1>=1){
          y1-=1;
          // left+=1;
          // temp-=1;
          if(flag6==1){
            temp+=1;
          }
          else{
            temp-=1;
          }
          if(x1==x and y1==y){
            flag6=1;
          }
        }
        x1=i,y1=j;
        while(x1<=n){
          x1+=1;
          // down+=1;
          // temp-=1;
          if(flag7==1){
            temp+=1;
          }
          else{
            temp-=1;
          }
          if(x1==x and y1==y){
            flag7=1;
          }
        }
        x1=i,y1=j;
        while(x1>=1){
          x1-=1;
          // up+=1;
          temp-=1;
          if(flag8==1){
            temp+=1;
          }
          else{
            temp-=1;
          }
          if(x1==x and y1==y){
            flag8=1;
          }
        }
        temp+=7;
        ans+=temp;
      }
    }
    cout<<ans<<endl;
  }
}
