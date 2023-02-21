#include <iostream>
#include "PrintArray.cpp"
using namespace std;

void bubbleSort(int array[], int arrayLength){
    int temp;
    for (int i=0; i<arrayLength; i++){
        for (int j=0; j<arrayLength-i-1; j++){
            if (array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printArray(array, arrayLength);
}

int main(){
    int a[5] = {5, 4, 6, 2, 1}, n = 5;
    bubbleSort(a, n);
    return 0;
}
