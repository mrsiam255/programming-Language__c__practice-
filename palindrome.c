#include<stdio.h>
#include<string.h>
int main(){

int n,palin=0;
char S[100000];
gets(S);
n=strlen(S);

for(int i=0,j=n-1;i<j;i++,j--){
    if(S[i]!=S[j]){
    palin++;
    break;
    }
}

if(palin==0){
    printf("YES");
}
else{
    printf("NO");
}
}
