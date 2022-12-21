#include<stdio.h>
#include<string.h>
int main(){
int n,temp;
char c[30];
int R=c[30];
printf("eneter the string");
scanf("%s",&c);
//while(c[n]!='\0'){
//n++;
//}
n=strlen(c);
for(int i=0;i<n/2;i++){
temp=c[i];
c[i]=c[n-1-i];
c[n-1-i]=temp;
}
printf("%s",c);
return 0;
}