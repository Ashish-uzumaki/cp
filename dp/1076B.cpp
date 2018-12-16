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
vector<pair<lli,lli> >v1,v2;
lli n,m,x,y,k,t;
// vector<lli>v;
map<lli,vector<lli> >g;
lli step,ways;
// lli dp[10000007][4];
lli MOD=1e9+7;
vector<lli>v;
void Divisors(lli n)
{
    for (lli i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i){
              v.pb(i);
            }
            else{
              v.pb(i);
              v.pb(n/i);
            }
        }
    }
}
bool isPrime(lli n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (lli i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}
int main(){
  _
  cin>>n;
    if(n%2==0){
      cout<<n/2;
    }
    else{
      Divisors(n);
      sort(v.begin(),v.end());
      for(lli i=0;i<v.size();i++){
          if(v[i]!=1 and isPrime(v[i])){
            cout<<(n-v[i])/2+1;
            break;
          }
      }
    }
  }
