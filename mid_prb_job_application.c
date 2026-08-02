#include<stdio.h>
int main(){

int N;
scanf("%d",&N);
int a[100000];
for(int i=0;i<N;i++){
    scanf("%d",&a[i]);
}

for (int i=0;i<N;i++){
        if(a[i]<1){
            printf("Entry-level candidate\n");
        }
        else if (a[i]>=1 && a[i]<=3){
            printf("Junior candidate\n");
        }
        else if (a[i]>=4 && a[i]<=7){
            printf("Mid-level candidate\n");
        }
        else if (a[i]>7 && a[i]<=20){
            printf("Senior candidate\n");
        }

}
}
