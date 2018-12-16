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
vector<lli>v;
bool check(lli n){
  while(n){
    s.insert(n%10);
    n=n/10;
  }
  if(s.size()<=k){
    return 1;
  }
  return 0;
}
void fun(lli n){
  if(n>1e18+1 or !check(n)){
    return;
  }
  v.push_back(n);
  for(lli i=0;i<10;i++){
    fun(n*10+i);
  }
}
int main(){
  cout<<"hi";
}
