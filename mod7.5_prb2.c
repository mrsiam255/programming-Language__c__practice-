#include<stdio.h>
int main(){

int n,magic,count=0;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
scanf("%d",&magic);
for(int i=0;i<n;i++){
        if(magic==arr[i]){
            printf("%d",i);
            count++;
            break;
        }}
        if(magic!=0 && count==0){
            printf("%d",-1);
        }
}
