#include<stdio.h>
int main(){

int m,n,p;
scanf("%d%d%d",&m,&n,&p);

int *x=&m;
int *y=&n;
int *z=&p;

int *max=x;
if(*max<*y)max=y;

if(*max<*z)max=z;


int *min=x;
if(*y<*min)min=y;
if(*z<*min)min=z;

printf("%d %d",*min,*max);
}
