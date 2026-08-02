#include<stdio.h>
int main(){

for(int i=100;i<1000;i++){

    if(i%2==0 && i%3==0 && i%5==0){
        printf("%d\n",i);
        //break; if we use this break then i will give us only first output otherwise all
    }
}

}
