#include<stdio.h>
void fact(int N)
{
int sum=1;
for(int i=1;i<=N;i++)
{
sum=sum*i;
}
printf("%d",sum);

}
int main()
{
int N;
printf("enter the n");
scanf("%d",&N);
fact(N);
}       