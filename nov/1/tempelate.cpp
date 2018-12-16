//modulo divide start
lli modInverse(lli b, lli m){
  lli x, y;
  lli g = gcdExtended(b, m, &x, &y);
  if (g != 1)
  return -1;
  return (x%m + m) % m;
}
lli modDivide(lli a, lli b, lli m){
  a = a % m;
  lli inv = modInverse(b, m);
  if (inv == -1)
  return -1;
  else
  return (inv * a) % m;
}
lli gcdExtended(lli a, lli b, lli *x, lli *y){
  if (a == 0){
    *x = 0, *y = 1;
    return b;
  }
  lli x1, y1;
  lli gcd = gcdExtended(b%a, a, &x1, &y1);
  *x = y1 - (b/a) * x1;
  *y = x1;
  return gcd;
}
//modulo divide end
