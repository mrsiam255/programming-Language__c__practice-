#include<stdio.h>
int main(){


char n;
//printf("input");
scanf("%c", & n);

if (n>=97 && n<=122){
    printf("ALPHA\n"
           "IS SMALL");
}

else if(n>65 && n<90){
         printf("ALPHA\n"
           "IS CAPITAL");
}

else
    printf("IS DIGIT");


return 0;

}


