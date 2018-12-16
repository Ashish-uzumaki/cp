#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli t,x,y;
    cin>>t;
    while (t--) {
      cin>>x>>y;
      if(x<y){
          cout<<-1<<endl;
      }
      else{
        lli p=(x-y)/2;
        cout <<p <<" "<< (p + y) << endl;
      }
    }
    return 0;
}
