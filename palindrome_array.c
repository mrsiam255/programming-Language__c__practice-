#include<stdio.h>
int main(){

int n,palin=0;
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
if(n<2){
    printf("No");
}

for(int i=0,j=n-1;i<j;i++,j--){
    if(arr[i]!=arr[j]){
        palin++;
    break;
    }
}
if(palin==0){
printf("YES");
}
else{
    printf("NO");
}
}
