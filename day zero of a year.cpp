#include<stdio.h>
#include<string.h>
int main(){
static int t[100]={0,3,2,5,0,3,5,1,4,6,2,4};
int year,month,day;
scanf("%d",&year);
year-=month<3;
year=(year+year/4-year/100+year/400+
t[month-1]+day)%7;
printf("%d",year);
return 0;
}