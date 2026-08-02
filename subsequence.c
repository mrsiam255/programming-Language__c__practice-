#include<stdio.h>
#include<string.h>
int main(){

char a[100000];
char b[]="hello";
int m=strlen(b);

gets(a);
int j=0;

for (int i=0;a[i]!='\0';i++){
    if (a[i]==b[j]){
        j++;
    }
}
if(j==m){
    printf("YES");
}
else{
    printf("NO");
}
}
