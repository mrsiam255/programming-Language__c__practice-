#include<stdio.h>
int main(){

int n,even_count=0,odd_count=0,poss_count=0,neg_count=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){

        int x;
        scanf("%d",&x);// specific value initialize ar jonno

        if(x%2==0){
            even_count++;
        }
        else
        {
            odd_count++;

        }

        if(x>=0){
             poss_count++;
        }
        else {
              neg_count++;
            }
}

printf("Even count: %d ",even_count++);
printf("Odd count: %d ",odd_count++);
printf("Poss count: %d ",poss_count++);
printf("Neg count: %d",neg_count++);

}
