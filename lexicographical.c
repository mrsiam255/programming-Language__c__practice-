#include<stdio.h>
#include<string.h>
int main(){

char a[100000];
gets(a);
char b[100000];
gets(b);

int n=strcmp(a,b);
{
    if(n>0){
        printf("%s",b);
    }
    else if(n<0){
        printf("%s",a);
    }
    else{
        printf("%s",a);
    }
}

}
