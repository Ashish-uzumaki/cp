#include<bits/stdc++.h>
using namespace std;
#define lli long long int

const lli N=100100;

struct node{
    lli sum;
};

node tree[2 * N+1];
lli arr[N+1];
const lli INF = 1e9 + 1;

void combine(lli root , lli lc, lli rc){
    tree[root].sum=tree[lc].sum + tree[rc].sum;
    return;
}

void assign(lli ind){
    tree[ind].sum+=1;
    return;
}

void update(lli index, lli id, lli l=0, lli r= N){
    if(l==r){
        assign(id);
        return ;
    }

    lli left = id<<1, right = left+1, mid = (l+r)>>1;

    if(index<=mid)   update(index, left, l, mid);
	else update(index, right, mid+1, r);

    combine(id,left, right);
}
node range_query(lli x, lli y, lli id, lli l, lli r){
  if(y < l or x > r) return ((node){0});

  if(x <= l and r <= y){
    return tree[id];
  }

  lli mid = (l + r) >> 1;
  lli lc = 2 * id;
  lli rc = lc + 1;

  node left_max = range_query(x, y, lc, l, mid);
  node right_max = range_query(x, y, rc, mid+1, r);


  return ((node) {
      left_max.sum+right_max.sum
    });
}

int main(){
    lli n;
    cin>>n;
    lli a[n+1];
    vector<pair<lli,lli> >v;
    for(lli i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(make_pair(arr[i],i));
    }
    // sort(v.begin(),v.end());
    for(lli i=0;i<n;i++){
        update(v[i].first,1,0,n);
    //     for(lli j=0;j<=2*n;j++){
    //     cout<<tree[j].sum<<" ";
    // }
    // cout<<endl;
        // cout<<v[i].second<<" ";
        node p=range_query(0,v[i].first-1,1,0,n-1);
        a[i]=p.sum;
        // cout<<p.sum<<endl;
    }
    // cout<<endl;
    for(lli i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
