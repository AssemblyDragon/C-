// Sorting an array of integers in ascending order usinh insetion sort

#include <iostream>
#include "PrintArray.cpp"
using namespace std;

void insertionSort(int a[], int n){
    int buffer, index;
    for (int i=1; i<n; i++){
        buffer = a[i];
        index = i-1;
        while (index >= 0 && a[index] > buffer){
            a[index+1] = a[index];
            a[index] = buffer;
            index--;
        }      
    }
    printArray(a, n);
}

int main(){

    int a[6] = {6, 1, 3, 9, 2, 6}, n = 6;
    insertionSort(a, n);
    
    return 0;
}
