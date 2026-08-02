#include<stdio.h>
#include<string.h>
int main(){

char s[100000];
gets(s);
int n=strlen(s);
for(int i=0;i<=n;i++){
    if(s[i]==','){
        s[i]=' ';
    }
    else if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
    }
    else if(s[i]>='a' && s[i]<='z'){
        s[i]=s[i]-32;
    }
}

for(int i=0;i<n;i++){
    printf("%c",s[i]);
}
}
