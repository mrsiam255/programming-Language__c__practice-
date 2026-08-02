#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int elm;
printf("finding element :");
scanf("%d",&elm);

int f[100000]={0};
for(int i=0;i<n;i++){
    f[arr[i]]=1;
}

if (f[elm]==1){
    printf("%d",elm);
}
else{
    printf("none!!");
}
}
