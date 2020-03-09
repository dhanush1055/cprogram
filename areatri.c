#include<stdio.h>
#include<math.h>
void main ()
{
int a,b,c;
float s,z,area;
printf("enter the values of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
z=(s*(s-a)*(s-b)*(s-c));
area=z;
printf("s=%f",s);
printf("z=%f",z);
printf("area=%f",area);
}
