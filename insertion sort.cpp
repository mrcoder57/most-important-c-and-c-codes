#include<stdio.h>
int main() {
    int arr[]= {34,56,12,3,6};
    int n;
    n=sizeof(arr)/sizeof(int);
    for(int i=1; i<n; i++) {
        int temp=arr[i];
        int j=i-1;
        while(arr[i]>temp && j>=0) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0; i<n; i++) {
        printf("%d\t",arr[i]);
    }
    return 0;
}