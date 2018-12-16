#include <bits/stdc++.h>
using namespace std;
#define N 100009
#define M 26
#define INF 1000000007
#define MOD 998244353
typedef long long int ll;
#define sd(x) scanf("%d",&x)
#define sd2(x,y) scanf("%d%d",&x,&y)
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define pf(x) printf("%d\n",x);
#define pf2(x,y) printf("%d %d\n",x,y);
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z);
#define fi first
#define se second
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define tr(x) cout<<x<< endl;
#define tr2(x,y) cout<<x<<" "<<y<< endl;
#define tr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl;
#define tr4(x,y,z,a) cout<<x<<" "<<y<<" "<<z<<  " " << a << " " << endl;
#define sz(x) ((int) (x).size())
#define __ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// dp--->total profit upto day of the ith machine such that we buy ith machine
struct arra{
    int day,price,resell,gain_per_day,dp;
}arr[N];

//sort the array by day
bool sort_by_day(struct arra a,struct arra b){
    return a.day<b.day;
}

int main(){
  __
    int i,j,m,z,k,t,q,x,n,y,j1,j2,c,d;
    while(1){
        int cost=0;
        //input of N,C,D
        sd3(n,c,d);
        //halting condition or end of the testcases
        if(n==0 && c==0 && d==0){
          break;
        }
        //input of details of machine day,price,resell_price,gain_per_day
        for(i=0; i<n; i++){
          sd2(arr[i].day, arr[i].price);
          sd2(arr[i].resell, arr[i].gain_per_day);
        }
        //sort the table of machine by day
        sort(arr,arr+n,sort_by_day);

        int total_profit=0;
        //loop for ith machine

        for(i=0; i<n; i++){

            int profit=-arr[i].price;//when you will buy ith machine then your profit will decrease by its price

            for(j=i-1; j>=0; j--){

                profit=max(profit,arr[j].dp+(arr[i].day-arr[j].day-1)*arr[j].gain_per_day-arr[i].price+arr[j].resell);
                //maximum profit till ith day when you buy ith machine
            }

            if(-profit<=c){
                arr[i].dp=profit;
            }
            else{
              arr[i].dp=-100000000;
            }

            total_profit=max(total_profit,arr[i].dp+(d-arr[i].day)*arr[i].gain_per_day+arr[i].resell);
        }
        tr(total_profit+c)//output total profit ;
    }
}
