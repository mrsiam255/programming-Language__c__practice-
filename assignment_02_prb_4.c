#include<stdio.h>
int main(){

int N;
scanf("%d",&N);
if(N>=1 && N<=9){

    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
   }
   for(int i=1;i<=N;i++){
    for(int j=1;j<=i;j++){
        printf(" ");
    }
    for(int j=1;j<=N-i;j++){
        printf("%d",j);
    }
    printf("\n");
   }
   }

}
