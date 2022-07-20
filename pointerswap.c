#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char**ptrToName1,char**ptrToName2)
{
char *temp=NULL;
temp =*ptrToName1;
*ptrToName1 =*ptrToName2;
*ptrToName2=temp;
}
int main()
{
char *name1="SMR";
char *name2="SDR";
printf ("Before swap: \n ");
printf("name1=%s :\n", name1);
printf("name2=%s :\n", name2);
swap(&name1,&name2);
printf ("After swap:\n  ");
printf("name1=%s :\n", name1);
printf("name2=%s :\n", name2);
}

/*void swap(char**ptrToName1,char**ptrToName2);
char *temp=null;
temp =*ptrToName1;
*ptrToName1 =*ptrToName2;
*ptrToName2=temp;
}
*/
