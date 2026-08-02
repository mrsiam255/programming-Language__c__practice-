#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }}
int test=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==j && arr[i][j]!=1)||(i!=j && arr[i][j]!=0)){
                    test++;
            break;
            }
        }
    }

    if(test==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
