#include<stdio.h>
void main()
{
int a;
clrscr();
printf("enter a number from 1 to 5");
scanf("%d",&a);
switch(a){
case 1:
printf("Pizza, Rs 239");
break;
case 2:
printf("burger, Rs 129");
break;
case 3:
printf("pasta, Rs 179");
break;
case 4:
printf("french fries, Rs 99");
break;
case 5:
printf("sandwich, Rs 149");
break;
default:
printf("invalid input");
}
return 0;
}
