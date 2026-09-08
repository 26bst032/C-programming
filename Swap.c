#include<stdio.h>
int main()
{
  int a,b;
printf("enter two numbers:");
scanf("%d %d,&a,&b");
a =a+b;
b =a-b;
a =a-b;
printf("after swapping:a=%d,b=%d",a,b);
return 0;
}
output:
enter two numbers:10 20
  after swapping: a=20,b=10
