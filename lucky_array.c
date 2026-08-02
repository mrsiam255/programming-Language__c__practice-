#include<stdio.h>
int main(){

int n,min,count;
scanf("%d",&n);

int a[n+5];{
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}

int min=a[0];
for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }

}
for(int i=0;i<n;i++){
    if(a[i]==min){
        count++;
    }
}

if(count%2!=0){
printf("Lucky\n");
}
else{
    printf("Unlucky\n");
}}
}
