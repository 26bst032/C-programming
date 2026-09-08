#include<stdio.h>
void fun1()
//NANR
{
printf("NANR function\n");
}
void fun2(int a)
//ANR
{
printf("ANR: %d\n",a);
}
int fun3()
//NAWR
{
return a+b;
}
int main()
{
int res;
fun1();
fun2(20);
res = fun3();
printf("NAWR: %d}n",res);
res = fun4(10,20);
printf("AWR: %s\n",res);
return 0;
}
output:
NANR Function
ANR: 20
NAWR: 10
AWR: 30


