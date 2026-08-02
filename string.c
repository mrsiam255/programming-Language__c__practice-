#include<stdio.h>
int main(){

char str[25];
fgets(str,sizeof(str),stdin);
fputs(str,stdout);
}
