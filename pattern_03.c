/*desire output ;

1
2 1
3 2 1
4 3 2 1

*/


#include<stdio.h>
int main(){

int n;
printf("desire pattern: ");
scanf("%d",&n);


for(int i=0;i<n;i++){
    for(int j=i+1;j>=1;j--){
        printf("%d ",j);
    }
    printf("\n");
}
}
