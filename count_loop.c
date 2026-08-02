#include<stdio.h>
int main(){

int n;
printf("input");
scanf("%d",&n);
int count=0;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            count++;
        }
    }
}

printf("   Total number of loops: %d",count);


}
