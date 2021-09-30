#include <stdio.h>
#define N 10000

char a[N], b[N], c[N], d=0;
int k=N-1;
void fibb(int n){
    if(n==0){
        printf("%d", 0);
        return;
    }
    else if(n==1){
        printf("%d", 1);
        return;
    }
    a[N-1]=1;
    b[N-1]=0;
    for(int i=2; i<=n; i++){
        for(int i=N-1; i>=k; i--){
            int p = a[i]+b[i]+d;
            c[i]=(p%10);
            d=p/10;
            if(i==k && d>0) 
            k--;
        }
        for(int i=N-1; i>=k; i--){
            b[i]=a[i];
            a[i]=c[i];   
        }
    }
    for(int i=k; i<N; i++)
        printf("%d", c[i]);
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    fibb(n);
    return 0;
}
