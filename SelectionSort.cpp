#include <iostream>
#include <climits>
using namespace std;

void printArray(int array[], int arrayLength){
    cout << "Array" << endl;
    for (int i=0; i<arrayLength; i++){
        cout << array[i] << endl;
    }
    cout << endl;
}

void selectionSort(int array[], int arrayLength){
    int min, index, temp;
    for(int j=0; j<arrayLength-1; j++){
        min = INT_MAX;
        index = -1;
        for(int i=j; i<arrayLength; i++){
            if (array[i] < min){
                min = array[i];
                index = i;
            }
        }
        temp = array[index];
        array[index] = array[j];
        array[j] = temp;
    }
    printArray(array, arrayLength);
}

int main(){
    int n = 5, array[5] = {5, 4, 3, 2, 1};
    selectionSort(array, n);
}
