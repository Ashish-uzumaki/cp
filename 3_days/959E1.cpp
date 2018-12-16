#include<bits/stdc++.h>
using namespace std;
long long dp[50];
int main()
{
    long long n;
    cin>>n;
    for (int i=1;i<50;i++)
    dp[i]=2LL*dp[i-1]+(1LL<<(i-1));
    n--;
    long long ans=0;
    for (int i=0;i<50;i++)
    {
        if (n&(1LL<<i)){
          long long k=n&(1LL<<i);
          long long p=(1LL<<i);
          cout<<k<<" "<<p<<endl;
          ans+=dp[i]+(1LL<<i);
        }
    }
  // cout<<ans<<endl;
}
