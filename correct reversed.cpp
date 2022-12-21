#include<stdio.h>
int reverse (int n);
int main(){
   int n,rev;
   printf("\nEnter any number:");
   scanf("%d",&n);
   rev=reverse(n);
   printf("\nAfter reverse the no is :%d",rev);
   return 0;
}
int sum=0,r;
int reverse(int n){
   if(n){
      r=n%10;
      sum=sum*10+r;
      reverse(n/10);
   }
   else
      return sum;
   return sum;
}