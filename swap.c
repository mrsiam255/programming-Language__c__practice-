#include<stdio.h>
int main(){

int n,min,max,temp;{
scanf("%d",&n);

int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}

int min=a[0],max =a[0];
for(int i=1;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
    if(a[i]>max){
        max=a[i];
    }}

int temp=a[min];
int a[min]=a[max];
int  a[max]=temp;


for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
}
}
