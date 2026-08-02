#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int a[n];
for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
}
int X;
scanf("%d",&X);
a[X]=1-a[X];
for(int i=1;i<=n;i++){
    printf("%d ",a[i]);
}
}
