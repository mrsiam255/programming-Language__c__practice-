#include<stdio.h>
int a[1000],b[1000];
int main(){

int m,n;
scanf("%d",&m);

for(int i=0;i<m;i++){
scanf("%d",&a[i]);
}

/*for(int i=0;i<m;i++){
    printf("%d\n\n\n",a[i]);
}*/

for(int i=0;i<m;i++){
        b[i]=a[i];
}
n=m;

for(int i=0;i<m;i++){
    printf("%d ",a[i]);
}
printf("\n");

for(int i=0;i<n;i++){
    printf("%d ",b[i]);
}

}
