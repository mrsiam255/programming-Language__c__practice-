#include<stdio.h>
int main(){

int m,n;
scanf("%d %d",&m,&n);

int *x=&m;
int *y=&n;
int z=(*x+*y);
int *z1=&z;

printf("%d",*z1);


}
