#include<stdio.h>
int main(){

int n,m;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%d ",&m);{
    if(n%2==0){
        printf("Even: %d",m);
    }
    else if(n%2!=0){
        printf("Odd: %d",m);
    }
    else if(n>=0){
        printf("Positive %d",m);
    }
    else {
        printf("Negative %d",m);
    }
    }
}




}
