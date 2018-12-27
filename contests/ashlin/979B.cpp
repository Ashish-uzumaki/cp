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
// const lli N = 1005505;
const lli mod = 1e9 + 7;
const lli INF = 1e9 + 7;
int s,n,d,l,x;
// vector<lli>v;
map<char,int>m1,m2,m3;
int getans(int N) {
  string u;
	cin>>u;
	int i, L = u.length();
	for (i = 0; i < L; i++) m1[u[i]-'a'] = 0;
	for (i = 0; i < L; i++) m1[u[i]-'a']++;

	if (L == 1) return 1;

	int mx = 0;
	for (i = 0; i <L; i++) mx = max(mx, m1[u[i]-'a']);
  // cout<<mx<<endl;
	if (mx == L) {
		if (N == 1){
      return mx - 1;
    }
		else{
      return mx;
    }
	}

	return min(L, mx + N);
}
int main() {
	int N, i;
	scanf("%d", &N);

	int v[3];
	v[0] = getans(N);
	v[1] = getans(N);
	v[2] = getans(N);
  // cout<<v[0]<<" "<<v[1]<<" "<<v[2];
	int mx = max(max(v[0], v[1]), v[2]);

	int c = 0;
	for (i = 0; i < 3; i++) if (v[i] == mx) c++;
	if (c >= 2) return !printf("Draw\n");

	if (v[0] == mx) printf("Kuro\n");
	if (v[1] == mx) printf("Shiro\n");
	if (v[2] == mx) printf("Katie\n");
	return 0;
}
