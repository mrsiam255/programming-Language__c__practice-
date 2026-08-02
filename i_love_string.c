#include<stdio.h>
int main(){

int n;
scanf("%d",&n);

char a[100000];
char b[100000];

gets(a);
gets(b);

for(int i=0,j=0;a[i]!='\0',b[j]=!'\0';i++,j++){
   if ((i==0) || (i%2==0 && j%2==0)){
            a[i]=b[j];
       }
   else if (i%2!=0){
    b[j]=a[i];
   }

printf("%s%s",a,b);

}
}
