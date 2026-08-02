#include<stdio.h>
int main(){

char r[100000];
char a[100000];

int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%s",&a[i]);

int len=strlen(a);

if(len<=10){
printf("%s\n",a);//
}
else{
    r[0]=a[0];
    r[1]='\0';

int length=len-2;
sprintf(r+1,"%d%s",length,&r[len-1]);
printf("%s\n",r);

}
}
}

