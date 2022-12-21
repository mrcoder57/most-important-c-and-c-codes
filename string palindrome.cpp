#include<stdio.h>
#include<string.h>
int main(){
int n,temp;
char c[30];
char Rev[30];
printf("eneter the string");
scanf("%s",&c);

char R[30];
n=strlen(c);
for(int i=0;i<n/2;i++){
temp=c[i];
c[i]=c[n-1-i];
c[n-1-i]=temp;
}
strcpy(c,R);
printf("%s",R);
return 0;
}