#include<stdio.h>
#include<string.h>
int main(){

char s[100000],p[100000],r[100000];

gets(s);
gets(p);

int n=strlen(s);
int m=strlen(p);
printf("%d %d\n",n,m);

for(int i=0;i<n;i++){
    r[i]=s[i];
}
for(int i=0;i<m;i++){
    r[n+i]=p[i];
}
printf("%s\n",r);

char r11[100000];
char r1[100000];

r11[0]=p[0];
for(int i=1;i<n;i++){
        r11[i]=s[i];
}
r1[0]=s[0];
for(int i=1;i<m;i++){
        r1[i]=p[i];
}

printf("%s %s",r11,r1);}
