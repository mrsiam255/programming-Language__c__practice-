#include<stdio.h>
#include<stdbool.h>
int main(){


printf("Hello World\n");

int n;
printf("How many days are your tour will be existed: \n"
       "You must choice 2 or 4\n\n");
scanf("%d",&n);

if (n==2){
    bool boat_availed=true;

    if(boat_availed){
        printf("Going to Tanguar Hawor");
    }
    else {
        printf("Going to sylhet");
    }
}

else{
    bool ship_has=true;

     if(ship_has){
        printf("Going to saint martin");
     }
     else {
        printf("Going to coxsbazar");
        }
    //else{
        //printf("call prity and talk with her !! ")
    }

}
