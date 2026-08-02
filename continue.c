#include<stdio.h>
int main(){

int n;
printf("desire digit:");
scanf("%d",&n);

for(int i=1;i<n;i++){

    printf("%d siam looks at prity\n",i);
    printf("%d prity looks at siam\n",i);

    if(i== n/2){

             continue;
            printf("%d They hate eachother\n");
    }

}
return 0;

}
