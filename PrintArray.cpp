// Function that prints the array to the console

#include <iostream>
using namespace std;

void printArray(int array[], int arrayLength, bool new_line=true){
    for (int i=0; i<arrayLength; i++){
        if (!new_line){
            cout << array[i] << " ";
        }
        else{
        cout << array[i] << endl;
        }
    }
    if (!new_line){
        cout << endl;
    }
}

/*
int main(){
    int a[5] = {1, 2, 3, 4, 5}, n = 5;
    // printArray({1, 2, 3, 4}, 4);
    printArray(a, n);
    return 0;
}
*/
