#include<stdio.h>
//int a,b;

int add(){
    int a,b;
scanf("%d%d",&a,&b);   // in this code ; no perameter needed because we scan number from user defined function
int sum=a+b;
return sum;

}

int main(){

//scanf("%d%d",&a,&b);
int res=add();
int res1=add();
printf("%d\n%d",res,res1);


}
