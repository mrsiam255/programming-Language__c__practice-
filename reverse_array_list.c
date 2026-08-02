#include<stdio.h>
int a[100000];
int b[100000];
int main(){

int n;
scanf("%d",&n);

for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}

for(int i=0,j=n-1;i<n;i++,j--){
        b[j]=a[i];
    }
for(int i=0;i<n;i++){// think B is a normal array now & we just the value of B kept in A array
    a[i]=b[i];
}


for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
}
