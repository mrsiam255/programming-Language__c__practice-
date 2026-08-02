/*desire output ;

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/


#include<stdio.h>
int main(){

int n;
printf("desire pattern: ");
scanf("%d",&n);

for(int i=5;i>=1;i--){
    for(int j=n;j>=n+1-i;j--){
        printf("%d ",j);
    }
    printf("\n");
}
}

