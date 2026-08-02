#include<stdio.h>
int main(){

int n;
printf("input array size: \n");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int sum=0,avg;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
printf("sum:%d\n",sum);
printf("avg: %d",avg=sum/n);

}
