#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int const MAXN=1e6+1;
lli fen[MAXN+1],tot[MAXN],sz;
void add(lli x, lli val){
    for (lli i = x + 1; i < MAXN; i += i & (-i)){
       fen[i] += val;
     }
}
lli get(lli x){
    lli ans = 0;
    for (lli i = x; i > 0; i -= i & (-i)){
       ans += fen[i];
     }
    return ans;
}
lli sum(lli x, lli y){
    return get(y) - get(x);
}
