#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
if(n>=2 && n<=1000){
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

int min=arr[0],minindx=0;
for(int i=1;i<n;i++){
    if(arr[i]<min){
            min=arr[i];
            minindx=i;
}
}
printf("%d %d",min,minindx+1);
}
}
