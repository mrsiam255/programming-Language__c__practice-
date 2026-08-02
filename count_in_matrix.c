#include<stdio.h>
int main(){

int m,n,x;
scanf("%d%d%d",&m,&n,&x);
int a[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}

int arr[x];
for(int i=0;i<x;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<x;i++){
int count=0;
for(int j=0;j<m;j++){
    for(int k=0;k<n;k++){
        if(arr[i]==a[j][k]){
            count++;
        }
    }
}
printf("%d\n",count);

}
}
