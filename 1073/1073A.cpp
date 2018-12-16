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
int main(){
  _
  lli n;
  string s;
  cin>>n;
  cin>>s;
  string s1="";
  for(lli i=1;i<n;i++){
    if(s[i]!=s[i-1]){
      s1+=s[i-1];
      s1+=s[i];
      cout<<"YES"<<endl;
      cout<<s1;
      return 0;
    }
  }
  cout<<"NO";
}
