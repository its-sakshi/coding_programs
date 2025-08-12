// Reversing the elements of array 
// INPUT  => arr = {1,4,7,8}
// OUTPUT => ARR = {8,7,4,1}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
//logic to reverse the elements
   int s = 0, e = num -1;
    while(s <= e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    
}
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
