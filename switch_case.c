#include<stdio.h>
int main(){


int n;
printf ("Input your day\n"
        "You must have to choice the day from 1 to 7 __ ");
scanf("%d",&n);

switch (n){

case 1 :
    printf("That is saturday");
    break;
case 2:
    printf("That is sunday");
    break;
case 3:
    printf("That is monday");
    break;
case 4:
    printf("That is tuesday");
    break;
case 5:
    printf("That is wednesday");
    break;
case 6:
    printf("That is thursday");
    break;
case 7:
    printf("That is friday");
    break;
default:
    printf("wrong activation !! ");

}

}
