#include<stdio.h>
#include<string.h>
int main(){

char s1[1000];
char s2[1000];
char s3[1000];

fgets(s1,sizeof(s1),stdin);
fgets(s2,sizeof(s2),stdin);
fgets(s3,sizeof(s3),stdin);

char low[100000];
char max[100000];


if ((strcmp(s1,s2)<0) && (strcmp(s1,s3)<0)){
    strcpy(low,s1);
}
if ((strcmp(s2,s1)<0) && (strcmp(s2,s3)<0)){
    strcpy(low,s2);
}
if ((strcmp(s3,s2)<0) && (strcmp(s3,s1)<0)){
    strcpy(low,s3);
}
printf("%s",low);


if ((strcmp(s1,s2)>0) && (strcmp(s1,s3)>0)){
    strcpy(max,s1);
}
if ((strcmp(s2,s1)>0) && (strcmp(s2,s3)>0)){
    strcpy(max,s2);
}
if ((strcmp(s3,s2)>0) && (strcmp(s3,s1)>0)){
    strcpy(max,s3);
}
printf("%s",max);

}

