// in the code we findout array minimum and maximum values


#include<stdio.h>
int main(){


int n;
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int min=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
int max=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
printf("minimum_value:%d\n",min);
printf("maximum_value:%d",max);
}
