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
int n,m,x,y,k;
vector<lli>v;
// string s;
int main(){
  _
  char s[5001];
  lli dp[5001];
  while(true){
    scanf("%s",s);
    lli L = strlen(s);
    if(s[0]=='0'){
      break;
    }
		dp[0] = dp[1] = 1;

		for(int i = 2;i<=L;++i){
			dp[i] = 0;

			char c1 = s[i-2]-'0';
      char c2 = s[i-1]-'0';

			if(c1==1 || (c1==2 && c2<=6)){
        dp[i] += dp[i-2];
      }
			if(c2!=0){
        dp[i] += dp[i-1];
      }
		}

		printf("%lld\n",dp[L]);
  }

}
