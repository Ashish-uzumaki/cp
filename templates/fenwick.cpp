const lli MAXN = 1000 * 1000 + 1;
lli fen[MAXN],cnt[MAXN],tot[MAXN],sz;
void add(lli x, lli val){
    for (lli i = x + 1; i < MAXN; i += i & (-i)) fen[i] =val;
}
lli get(lli x){
    lli ans = 0;
    for (lli i = x; i > 0; i -= i & (-i)) ans = max(ans,fen[i]);
    return ans;
}
lli maximum(lli x, lli y){
    return max(get(y),get(x));
}
