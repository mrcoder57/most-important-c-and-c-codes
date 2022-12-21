#include<stdio.h>
#include<math.h>

int main()
{
    int B ,R ,N ,I;
    printf("enter the N");
    scanf("%d",&N);
    I=0;
    B=0;
    while(N>0)
    {
    R=N%2;
 
    B=B+pow(10,I)*R;
    I=I+1;
    N=N/2;
    }
    printf("%d",B);
    return 0;
}