#include<stdio.h>
int main(){

int N,d,sum=0;
scanf("%d",&N);

for(int ;N!=0;N=N/10){
        d=N%10;
sum=sum+d;

}
printf("%d",sum);

}
