#include <stdio.h>
int a[100010];
int main(){
        int n,v,mx,i,first,second,num;
        scanf("%d",&n);
        first=-1,second=-2;
        for(i=0;i<n;i++){
                scanf("%d",&v);
                if(v>first) second=first,first=v;
                else if(v>second) second=v;
                if(v==first) a[v]=-1;
                else a[v]=0;
                if(v==second) a[first]++;
        }
        mx=-0x3fffffff;
        for(i=1;i<=n;i++){
                if(a[i]>mx) mx=a[i],num=i;
        }
        printf("%d\n",num);
        return 0;
}
