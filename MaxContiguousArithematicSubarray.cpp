// Finding the maximum sum of a continous subarray

#include <iostream>
using namespace std;

int main(){
    int n=10, a[10] = {1, 2, 3, 4, 5, 4, 6, 8, 10, 1}, max, s, diff, oldiff;
    oldiff = a[1] - a[0];
    s = 2;
    max = s;
    for (int i=2; i<n; i++){
        diff = a[i] - a[i-1];
        if (oldiff == diff){
            s++;
        }
        else if (s > max){
            max = s;
            oldiff = a[i] - a[i-1];
            s  = 2;
        }
        else{
            oldiff = a[i] - a[i-1];
            s  = 2;
        }
    }
    if (s>max){
        max = s;
    }
    cout << max;
    return 0;
}
