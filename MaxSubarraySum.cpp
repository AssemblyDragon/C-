#include <iostream>
#include <climits>
#include "PrintArray.cpp"
using namespace std;

int bruteForce(int a[], const int N){
    int sum, max = INT_MIN;
    for (int i=0; i<N; i++){
        for (int j=i+1; j<N; j++){
            for (int k=i; k<j; k++){
                sum += a[k];
            }
            if (sum>max){
                max = sum;
            }
            sum = 0;
        }
    }
    if ()
}

int main(){
    const int N = 4;
    int a[N] = {-1, 4, 7, 2};
    bruteForce(a, N);
    return 0;
}
