#include<stdio.h>
int main ()
{
int counter;
for(counter=0;counter<=10;counter++)
{ 
if (counter==5)
{
continue;
}
printf("%d\n",counter);
}
}

