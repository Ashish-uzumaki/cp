#include <bits/stdc++.h>
using namespace std;
#define INF 10000000000009
#define MOD 1000000009
typedef long long int lli;
#define sd(x) scanf("%d",&x)
#define sd2(x,y) scanf("%d%d",&x,&y)
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define pf(x) printf("%lld\n",x);
#define pf2(x,y) printf("%d %d\n",x,y);
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z);
#define fi first
#define se second
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define tr(x) cout<<x<<" ";
#define tr2(x,y) cout<<x<<" "<<y<<endl;
#define tr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl;
#define N 400009
int a[N],n,m,counti[1000009];
lli b[N];
struct node{
    int l,r,idx;
}q[N];
bool cmp(node n1,node n2){
    if((n1.l/n)==(n2.l/n))return n1.r<n2.r;
    return (n1.l/n)<(n2.l/n);
}
lli ans=0;
void add(int pos){
    ans-=(1ll*counti[a[pos]]*counti[a[pos]]*a[pos]);
    counti[a[pos]]++;
    ans+=(1ll*counti[a[pos]]*counti[a[pos]]*a[pos]);
}
void remove(int pos){
    ans-=(1ll*counti[a[pos]]*counti[a[pos]]*a[pos]);
    counti[a[pos]]--;
    ans+=(1ll*counti[a[pos]]*counti[a[pos]]*a[pos]);
}
int main(){
    ios_base::sync_with_stdio(false);
    int i,j,qq,k;
    sd2(m,qq);
    n=sqrt(m)+1;
    for(i=0; i<m; i++){
        sd(a[i]);
    }
    for(k=0; k<qq; k++){
        sd2(i,j);
        i--,j--;
        q[k].l=i,q[k].r=j,q[k].idx=k;
    }
    sort(q,q+qq,cmp);
    // for(i=0;i<qq; i++){
    //     tr3(q[i].l,q[i].r,q[i].idx);
    // }
    int prel=q[0].l,prer=q[0].l-1;
    for(i=0; i<qq; i++){
        int curl=q[i].l,curr=q[i].r;
        while(prer>curr){
            remove(prer);
            prer--;
        }
        while(prer<curr){
            prer++;
            add(prer);
        }
        while(prel<curl){
            remove(prel);
            prel++;
        }
        while(prel>curl){
            prel--;
            add(prel);
        }
        b[q[i].idx]=ans;
    }
    for(i=0; i<qq; i++){
        pf(b[i]);
    }
    return 0;
}
