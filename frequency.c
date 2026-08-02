#include<stdio.h>
int main(){

int N,M,freq=0;
scanf("%d%d",&N,&M);
int arr[N];{
for(int i=0;i<N;i++){
scanf("%d",&arr[i]);
}
int arr[M];{
for(int i=0;i<N;i++){
        for(int j=i;j<N&&j<=M;j++){
            if(arr[i]==arr[j]){
                freq++;
            }
           // printf("%d",j);
        }
}}}

printf("%d",freq);
}
