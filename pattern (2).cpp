#include<stdio.h>
#include<string.h>
int main(){
int n,i,j;
scanf("%d",&n);
for(i=n;i>0;i--){
for(j=0;j<i;j++){
printf("*");
}
int s=2*(n-i);
for(j=0;j<=s;j++){
printf(" ");
}
for(j=0;j<i;j++){
printf("*");
}
printf("\n");
}
return 0;
}