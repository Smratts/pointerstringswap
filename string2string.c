#include<stdio.h>
#include<string.h>
void main()
{
char str1[50];
char str2[50];
printf("enter a string1 \n");
scanf("%s", &str1);
strcpy(str2,str1);
int m,n;
m = strlen(str1);
printf("str1 lenth %d \n", m);
//scanf("string %s", &str2);
printf("after copying str1 to str2:%s\n ",str2);
n=strlen(str2);
printf("str2 lenth %d\n", m);

}
