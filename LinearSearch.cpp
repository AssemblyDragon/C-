#include <iostream>
using namespace std;

int linearSearch(int array[], int arrayLength, int element){
    for(int i=0; i<arrayLength; i++){
        if (array[i] == element){
            return i;
        }
    }
    return -1;
}

int main(){
    int n = 5, el1 = 3, el2 = 6;
    int array[5] = {1, 2, 3, 4, 5};
    cout << linearSearch(array, n, el1) << endl << linearSearch(array, n, el2) << endl;
    return 0;
}
