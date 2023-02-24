#include <iostream>
using namespace std;

int binarySearch(int array[], int arrayLength, int element){
    int beg = 0, end = arrayLength, mid;
    while (end >= beg){
        mid = (beg + end)/2;
        if (array[mid] == element){
            return mid;
        }
        else if(array[mid] > element){
            end = mid - 1;
        }
        else{
            beg = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n = 7, el1 = 5;
    int array[10] = {1, 2, 3, 4, 5, 6, 7};
    cout << binarySearch(array, n, el1) << endl;
    return 0;
}
