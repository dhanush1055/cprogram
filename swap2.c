#include<stdio.h>
void main ()
{
int a,b,c;
printf("enter the values of a and b\n");
scanf("%d%d",&a,&b);
printf("before swapping\n");
printf("a=%d,b=%d\n",a,b);
c=a;
a=b;
b=c;
printf("after swapping\n");
printf("a=%d,b=%d\n",a,b);
}
