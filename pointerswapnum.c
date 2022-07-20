#include<stdio.h>
int main()
{
int a=10,b=20;
printf("Enter the value for a=%d and b=%d",a,b);
//scanf("a=%d\n,b=%d\n", &a,&b);
 a=a+b;
b=a-b;
a=a-b;
 
printf("a ba values after swap a=%d,b=%d",a,b);


}
