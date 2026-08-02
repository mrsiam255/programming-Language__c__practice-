#include<stdio.h>

int add(int x, int y){

int sum=x+y;
return sum;

}

int main(){

int x,y,z,m;
scanf("%d%d%d%d",&x,&y,&z,&m);
int res=add (x,y);
int res1=add(z,m);
printf("%d\;%d",res,res1);

}
