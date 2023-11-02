#include<stdio.h>
int main()
{
int x,y,t;
printf("before swapping\n");
printf("the first no is: ");
scanf("%d",&x);
printf("the second number is: ");
scanf("%d",&y);
t=x;
x=y;
y=x;
printf("after swapping\n");
printf("the first no is %d\n",x);
printf("the second number is %d",y);
}
