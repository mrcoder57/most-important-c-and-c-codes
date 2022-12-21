#include<stdio.h>
#include<math.h>

int main()
{
    int S ,R ,N;
    printf("enter the N");
    scanf("%d",&N);
    S=0;
    while(N>0)
    {
    R=N%10;
    S=S+R;
    N=N/10;
    }
    printf("%d",S);
    return 0;
}