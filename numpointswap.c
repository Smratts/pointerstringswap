
//program to swap two numbers using pointers with function
#include<stdio.h>
#include<stdlib.h>

void swap(int *,int *);

int main()
{
int a,b;
printf("enter a and b \n");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("a=%d and b=%d\n",a,b);

return 0;
}
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

