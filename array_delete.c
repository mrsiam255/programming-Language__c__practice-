#include<stdio.h>
int a[100000];
int main(){

int size;
scanf("%d",&size);

for(int i=0;i<size;i++){
scanf("%d",&a[i]);
}

int index; // remember ; array delete r somoy ; sudhu index lagba
scanf("%d",&index);

for(int i=index;i<size-1;i++){
    a[i]=a[i+1];
}
size--;
for(int i=0;i<size;i++){
        printf("%d ",a[i]);

}
}
