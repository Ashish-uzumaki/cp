#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,ans=0;
  cin>>n>>m;
  vector<pair<int,int> >v;
  vector<pair<int,int> >v1;
  int a[n][m];
  for(int i=0;i<n;i++){
    v.push_back(make_pair(0,0));
    for(int j=0;j<m;j++){
      cin>>a[i][j];
      if(a[i][j]==0){
        v[i].first++;
      }
      else{
        v[i].second++;
      }
    }
  }
  ans+=n*m;
  for(int i=0;i<m;i++){
    v1.push_back(make_pair(0,0));
    for(int j=0;j<n;j++){
        if(a[j][i]==0){
          v1[i].first++;
        }
        else{
          v1[i].second++;
        }
      }
    }
    for(int i=0;i<v.size();i++){
      ans+=pow(2,v[i].first)-v[i].first-1+pow(2,v[i].second)-v[i].second-1;
    }
    for(int i=0;i<v1.size();i++){
      ans+=pow(2,v1[i].first)-v1[i].first-1+pow(2,v1[i].second)-v1[i].second-1;
    }
    cout<<ans<<endl;
}
