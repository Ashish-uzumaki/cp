#include<bits/stdc++.h>
using namespace std;
#define lli long long int
long long int phi(long long x)
{
  long long int ret = 1,i,pow;
  for (i = 2; x != 1; i++)
  {
    pow = 1;
    if(i>sqrt(x))break;
    while (!(x%i))
    {
      x /= i;
      pow *= i;
    }
    ret *= (pow - (pow/i));
    cout<<ret<<" ";
  }
  cout<<endl;
  if(x!=1)ret*=(x-1);
  return ret;
}
int main(){
  lli x,t;
  cin>>t;
  // while(--t){
  //   cin>>x;
  //   cout<<phi(x)<<endl;
  // }
  while(!t){
    cout<<"hi";
    break;
  }
}
