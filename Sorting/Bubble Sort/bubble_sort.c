#include <stdio.h>

int main()
{
    int n,i,j,temp;
    printf("\n====== Bubble Sort ======\n");
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nArray sorted in ascending order is:\n");
    for(i=0;i<n;i++) {
        printf("%d  ",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n-i-1;j++) {
            if(a[j]<a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nArray sorted in descending order is:\n");
    for(i=0;i<n;i++) {
        printf("%d  ",a[i]);
    }
    return 0;
}
