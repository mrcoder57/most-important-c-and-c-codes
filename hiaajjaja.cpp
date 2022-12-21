#include<stdio.h>
#include<string.h>

int main()
{
int i;
    char dtr[50];
    char str[50];
    scanf("%s",str);
    i=0;
    int j=strlen(str)-1;
    while(j>=0){
    dtr[i]=str[j];
    i++;
    j--;
    }
    dtr[i]='\0';
    printf("%s",dtr);
    return 0;
}