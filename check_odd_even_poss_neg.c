#include<stdio.h>
int main(){

int n;
printf("this is not valid for floating digit\n"
       "input digit:\n");
scanf("%d",&n);

if(n>=0){
    printf("poss digit\n");{
    if(n%2==0){
        printf("even number");
    }
    else{
        printf("odd number");
    }
}
}

else if(n<0){
    printf("neg digit\n");{
    if(n%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    }
}
}
