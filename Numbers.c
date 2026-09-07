#include<stdio.h>
int add(int a,int b)
{
  return a+b;
}
int main()
{
  int a,b,sum;
printf("enter two numbers:);
  scanf("%d %d",&a,&b);
sum = add(a,b);
printf("sum = %d",sum);
return 0;
}
output:
Enter two numbers:10 20
  sum = 30
