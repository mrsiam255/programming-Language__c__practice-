#include<stdio.h>
int main(){

int N,T;
scanf("%d%d",&N,&T);
int a[100000];
for(int i=0;i<N;i++){
scanf("%d",&a[i]);
}
int count=0,sum=0;

for(int i=0;i<N;i++){
    if (sum+a[i]<=T){
        sum=sum+a[i];
        count++;
    }

    else if(sum>T){
        break;
    }
}

printf("%d",count);
}
