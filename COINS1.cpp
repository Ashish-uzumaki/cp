#include<bits/stdc++.h>
using namespace std;
unordered_map<long long int,long long int> dp;
long long int recur(long long int n){
  if(n<12)  return n;
  if(dp[n]!=0) return dp[n];
    dp[n]=recur(n/2)+recur(n/3)+recur(n/4);
    return dp[n];
}
int main(){
  long long int n;
    while(scanf("%lld",&n)==1){
      long long int sum=recur(n);
      cout<<sum<<'\n';
    }
  return 0;
}
