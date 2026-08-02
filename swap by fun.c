#include<stdio.h>

void swap(int *m, int *n){ // remember address collect korta pointer use kkorta hoi
int temp=*m;
*m=*n;
*n=temp;

}

int main(){

int m=9,n=11;
swap(&m,&n);
printf("%d\n%d",m,n);
}
