#include<stdio.h>
int main(){

int n,digit,digit1,temp;
scanf("%d",&n);

for(int ;n!=0;n=n/10){
        digit=n%10;
        digit1=digit;

}
if(digit1/digit==0 || digit/digit1==0){
    printf("YES");
}
else {
    printf("NO");
}

}
