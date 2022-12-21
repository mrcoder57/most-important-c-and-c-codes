#include<stdio.h>
int main()
{
    int a[]= {19,16,14,31,45,34,76,123,456,78,90,98,345,678,789};
    int n,temp;
    n=sizeof(a)/sizeof(int);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++) {
        printf("%d ",a[i]);
    }
}