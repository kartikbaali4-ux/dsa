//=============Bubble sort==========
// Bubble Sort is a simple sorting algorithm that repeatedly compares two adjacent elements and swaps them if they are in the wrong order. 
// This process continues until the entire array is sorted.

// code:-

#include<stdio.h>
void traversal(int arr[],int size){
    for (int i = 0; i<size; i++){
        printf("%d  ",arr[i]);
    }
}

int bubbleSort(int arr[],int size){
    int temp;

    for (int i=0; i<size; i++){
        for (int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return 0;
}
int main(){

    int arr[5] = {5,4,3,2,1};
    int temp,size=sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted Array: ");
    traversal(arr,size);
    bubbleSort(arr,size);
    printf("\nSorted Array: ");
    traversal(arr,size);    
    return 0;
}