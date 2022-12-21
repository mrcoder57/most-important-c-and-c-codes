#include<stdio.h>

int main()
{int i,j,k,s;
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("*");
}
for(s=j;s<=5;s++)
{
printf(" ");
printf(" ");

}
for(k=1;k<=i;k++)
{
printf("*");
}
printf("\n");
}
    return 0;
}