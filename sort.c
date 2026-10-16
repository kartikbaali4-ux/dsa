

#include<stdio.h>
void traversal(int arr[],int size){
    for (int i = 0; i<size; i++){
        printf("%d  ",arr[i]);
    }
}
//=============Bubble sort==========
// Bubble Sort is a simple sorting algorithm that repeatedly compares two adjacent elements and swaps them if they are in the wrong order. 
// This process continues until the entire array is sorted.

// code:-

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

// ===========Inserstion Sort================ 

// Insertion Sort is a sorting algorithm that builds a sorted array one element at a time.
//  It takes each element and inserts it into its correct position among the previously sorted elements.
//  Ex: Think of playing cards 

// code:-
int inseration_Sort(int arr[],int size){
    
    for (int i=1; i<size; i++)
    {
        int curr = i;
        int prev = i - 1;

            while (prev >= 0 && arr[prev] > curr)
            {
                arr[prev + 1] = arr[prev];
                prev--;
            }
            
        arr[prev + 1] = curr;
    }
    return 0;
}

// ===========Selection sort=============
// Selection sort is a sorting algorithm that repeatedly selects the smallest element from the unsorted part of an array and places it at the beginning of that part.
//  This process continues until the entire array is sorted in ascending order.

int selectionSort(int arr[],int size){

    for (int i=0; i<size; i++){
        int min = i;
        for(int j=i+1; j<size; j++){
            if (arr[min] > arr[j]){
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    return 0;
}


int main(){

    int arr[5] = {5,4,3,2,1};
    int temp,size=sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted Array: ");
    traversal(arr,size);
    // bubbleSort(arr,size);
    // printf("\nSorted Array by bubble : ");
    // traversal(arr,size);    
    

    // printf("\nSort by Inseration sort: ");
    // inseration_Sort(arr,size);
    // traversal(arr,size);


    printf("\nSort by Selection sort: ");
    selectionSort(arr,size);
    traversal(arr,size);

    return 0;

}