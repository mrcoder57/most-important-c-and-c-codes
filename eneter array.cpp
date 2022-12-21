#include<stdio.h>
#include<math.h>

int main()
{
int i=0;
int marks[4];
  
for(;i < 4;)
{
printf("enter the marks of %d elements of array\n",i);
scanf("%d",&marks[i]);
i++;
}
for(int i=0;i < 4;)
{
printf("the marks of %d elements of array\n",i,marks[i]);

i++;
}
return 0;
}