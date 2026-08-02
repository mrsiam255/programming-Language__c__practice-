#include<stdio.h>
int main(){


int source,desire,res;
printf("this multiplication table is from 0 to 10 ; desire table of multiply:   "
       "from multiply_source: \n" );
scanf("%d:\n\n",&source);
printf("desitinatio to: ");
scanf("%d:\n\n",&desire);

for(int n=source;n<=desire;n++){
  for(int i=0;i<=10;i++){

       res=source*i;
        printf("%d %c %d %c %d\n",n,'*',i,'=',res); //we use this print in this loop because we have to output for every step

          // n=n+1;
 }

   printf("\n\n");
}

// if we use that loop here then it will give us only final output
}












