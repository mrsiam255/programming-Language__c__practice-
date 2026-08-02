#include<stdio.h>
int main(){

int N,X,Y;
scanf("%d%d%d\n",&N,&X,&Y);
int a[100000];
for(int i=0;i<N;i++){
scanf("%d",&a[i]);
}
int count=0;
for (int i=0;i<N;i++){
    if(a[i]>=4 && a[i]<=8){
        count++;
    }
}

printf("%d",count);
}
