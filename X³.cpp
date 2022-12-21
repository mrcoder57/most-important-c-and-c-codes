#include<stdio.h>
#include<math.h>
int main(){
int x,n;
int sum=0;
printf("enter the no.");
scanf("%d",&x);
printf("enter the pow");
scanf("%d",&n);
for(int i=1;i<=n;i+=2){
sum=sum+pow(x,i);
}
sum=sum-2;
printf("%d",sum);
}