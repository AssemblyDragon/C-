// smallest possible missing number from a sequence of numbers

#include <iostream>
#include "PrintArray.cpp"
#include <climits>
using namespace std;

int main(){
    const int N = 8;
    int a[N] = {1, 3, 1, 2, 3, 3, 5, 5}, max = INT_MIN;
    for (int i=0; i<N; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    
    const int M = max;
    int b[M];
    for (int i=0; i<M; i++){
       b[i] = -1;
    }

    for (int i=0; i<N; i++){
        if (a[i] >= 0){
            b[a[i]] = 1;
        }
    }

    for (int i=0; i<M; i++){
        if (b[i] == -1){
            cout << i << endl;
            break;
        }
        else if(i == M-1){
            cout << -1 << endl;
        }
    }
    return 0;
}
