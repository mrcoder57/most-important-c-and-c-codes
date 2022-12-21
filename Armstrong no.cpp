#include<stdio.h>
#include<math.h>

int main()
{
    int B ,R ,N ,T ,C;
    printf("enter the N");
    scanf("%d",&N);
    T=N;
    B=0;
    while(N>0)
    {
    B=B+1;
    N=N/10;
    }
    N=T;
    C=0;
    while(N>0)
    {
    R=N%10;
    C=C+pow(R,B);
    N=N/10;
    }
    if(T==C)
    printf("Armstrong no");
    else
    printf("not an Armstrong no");
    
    
    
    return 0;
}