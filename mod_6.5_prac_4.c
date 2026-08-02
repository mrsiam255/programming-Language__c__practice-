#include<stdio.h>
int main(){

int n,count=0;
scanf("%d",&n);

for(int i=1;i<=n;i++){
    if(i%2==0){
            count++;
        printf("%d\n",i);
    }}
      if(count==0){
        printf("%d",-1);
    }
}
