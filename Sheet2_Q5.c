//Write a program to find the largest element in an array using pointers
#include<stdio.h>
int largestElement(int *ptr, int size){
    int largest= *(ptr);
    for(int i=1; i<size; i++){
        if(*(ptr+i) > largest){
            largest = *(ptr+i);
        }
    }
    return largest;
}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements :");
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    int num = largestElement(arr,n);
    printf("largest element of array is :  %d ", num);
    return 0;
}
