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
ordered_set<lli>root,nom;//nom.order_of_key(x);
lli visit[100001];
vector<pair<lli,lli> >v1,v2;
lli n,m,x,y,k;
vector<lli>v;
string s;
int main(){
  _
  cin>>n;
  lli a[n+1];
  lli c=0;
  lli p=0;
    for(lli i=0;i<n;i++){
        cin>>a[i];
        c+=a[i];
        if(a[i]%2==1){
            p=1;
        }
    }
    if(c%2==1){
        cout<<"First";
    }
    else{
       if(p==1){
        cout<<"First";
       }
       else{
        cout<<"Second";
       }
    }
    return 0;
}
