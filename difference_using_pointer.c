#include<stdio.h>
int main(){

int m,n;
scanf("%d%d",&m,&n);

int *x=&m;
int *y=&n;
int z=(*x)-(*y);

if(z<0){
    int m=(z)*(-1);
    printf("%d",m);
}
else{
    printf("%d",z);
}

}
