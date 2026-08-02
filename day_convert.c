#include<stdio.h>
int main(){

int n,years,months;
scanf("%d",&n);

years=n/365;
n=n-(years*365);
months=(n/30);
n=n-(months*30);

printf("%d years\n%d months\n%d days",years,months,n);

}
