const lli MAX=15000001;
lli countdiv[MAX],prime[MAX];
void SieveOfEratosthenes(){
    for (lli i = 2; i * i < MAX; ++i){
        if (!prime[i])
            for (lli j = i * i; j < MAX; j += i)
                prime[j] = i;
    }
    for (lli i = 1; i < MAX; ++i)
        if (!prime[i]){
            prime[i] = i;
            v.push_back(i);
          }
}
void getFactorization(lli x)
{
  map<lli,lli>m2;
    while (x != 1){
      if(m2[prime[x]]!=1){
        m[prime[x]]+=1;
        m2[prime[x]]=1;
      }
        x=x/prime[x];
    }
}
void dfs(lli x){
  visit[x]=1
  for(lli i=0;i<g[x].size();i++){
    if(visit[g[x][i]]!=1){
      dfs(g[x][i]);
    }
  }
}
//ncr
for(int i = 0; i < N; ++i){
        c[i][0] = 1;
        for(int j = 1; j <= i; ++j){
            c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % mod;
        }
    }
//binary_search_on_answer
lli binary_search_on_answer(){
      lli l = 0;
    	lli r = n;
    	lli ans = 1;
    	while (l<=r) {
    		lli g = (l+r)/2;
    		if (check(g)) {
    			ans = g;
    			l = g+1;
    		} else r  = g-1;
    	}
    	return ans;
    }
    //fast expo
    template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
    template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%m; b/=2; a=(a*a)%m; } return ans%m; }
//factorization in log(n) where n<=1e18
vector<lli> factorize(lli n){
  vector<lli> v;
    lli count = 0;
    while (!(n % 2)) {
        n >>= 1; // equivalent to n=n/2;
        count++;
    }
    if (count)
        v.pb(2);
    for (lli i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count)
            v.pb(i);
    }
    if (n > 2){
      v.pb(n);
    }
    return v;
}
