#include<stdio.h>

int main()
{
char a[50];
int i;
printf("enter any string:%s ");
gets(a);
i=0;
while (a[i]!='\0')
i++;
printf("\n total number of characters=%d",i);
return 0;
}

