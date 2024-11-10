// Insertion Sort
#include <iostream>

using namespace std;

void insertionSort(int arr[], int n){

    for(int i = 1; i < n; i++){
        int j = i - 1;
        while(j >= 0 && arr[j]>arr[j+1]){
            // swap 2 num
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    }
    
}

void printArray(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){

    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr, n);

    insertionSort(arr, n);

    printArray(arr, n);


    return 0;
}