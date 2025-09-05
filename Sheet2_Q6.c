//Write a program to dynamically allocate memory for an integer array and calculate its  sum using malloc().
#include<stdio.h>
int sum(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum += arr[i];        
    }
    return sum;
}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    int *arr = (int*) malloc(n*sizeof(int));
    if(arr == NULL){
        printf("memory allocation failed. \n");
        exit(0);
    }
    printf("enter elements :");
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    int Sum = sum(arr,n);
    printf("sum of element of array is :  %d ", Sum);
    return 0;
}
