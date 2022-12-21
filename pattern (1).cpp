#include<stdio.h>
#include<string.h>
int main(){
char S[100]="AnilYadav😂";
int n;

n=strlen(S);
for(int i=0;i<=n;i++){
for(int j=0;j<i;j++){
printf("%c",S[j]);
}
printf("\n");
}
for(int i=n;i>0;i--){
for(int j=0;j<i;j++){
printf("%c",S[j]);
}
printf("\n");
}
return 0;
}