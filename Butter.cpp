#include<stdio.h>
#include<string.h>
int main(){
char S[100];
int n,i,j;
printf("Enter string");
scanf("%s",&S);
n=strlen(S);
for(i=0;i<=n;i++){
for(j=0;j<i;j++){
printf("%c",S[j]);
}
int s=2*(n-i);
for(j=0;j<=s;j++){
printf(" ");
}
for(j=0;j<i;j++){
printf("%c",S[j]);
}
printf("\n");
}
for(i=n;i>0;i--){
for(j=0;j<i;j++){
printf("%c",S[j]);
}
int s=2*(n-i);
for(j=0;j<=s;j++){
printf(" ");
}
for(j=0;j<i;j++){
printf("%c",S[j]);
}
printf("\n");
}


return 0;
}