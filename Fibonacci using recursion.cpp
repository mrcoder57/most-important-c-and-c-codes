#include<stdio.h>
int fibo(int n);
int main() {
    int count,c=0;
    printf("enter the elements of series:");
    scanf("%d",&count);
    for(int i=0; i<=count; i++) {
        printf("%d\n",fibo(c));
        c++;
    }
    return 0;
}
int fibo(int n) {
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2));
}