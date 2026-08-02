#include<stdio.h>
int main(){

int marks;
printf("...This grading system is used by HSC,SSC,JSC candidates not for higher studies...\n\n");
printf("...input your marks....\n"
       ":__:");
scanf("%d",&marks);


if(marks>=33 && marks<40){
    printf("_D_grade");
}
else if(marks>=40 && marks<50){
    printf("_C_grade");
}
else if(marks>=50 && marks<60){
    printf("_B_grade");
}
else if(marks>=60 && marks<70){
    printf("_A-_grade");
}
else if(marks>=70 && marks<80){
    printf("_A_grade");
}
else if(marks>=80 && marks<=100){
    printf("_A+_grade\n");{

    if(marks>=90 && marks<101){
        printf("Getting scholarship");
    }
    else{
       printf("NOT scholarship");
    }


    }
}
else if(marks>=0 && marks<33){
    printf("_F_grade");
}
else{
    printf("!!!__input invalid__!!!");
}


return 0;


}
