#include<stdio.h>
int ulta()
{
int n ,r, sum =0;

if(n<0){
scanf("%d",n);
r=n%10;
sum=sum*10+r;
return (n/10);
}
else 
return sum;
}
int main (){
int m;
printf("enter the no");
scanf("%d",m);
printf("the reverse of no is %d",ulta(m));
return 0;
}

