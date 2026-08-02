#include<stdio.h>
int main(){

int m,n;
scanf("%d %d",&m,&n);

int *y=&n;
int *z=&m;

printf("%d %d",*y,*z);


}
