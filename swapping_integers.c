#include<stdio.h>
void main()
{
int a=10,b=20;
printf("initial values are\n a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("final values are\n a=%d and b=%d",a,b);
return 0;
}
