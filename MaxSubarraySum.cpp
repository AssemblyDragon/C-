#include <iostream>
#include <climits>
#include "PrintArray.cpp"
using namespace std;

void bruteForce(int a[], const int N){
    int sum = 0, max = INT_MIN;
    for (int i=0; i<N; i++){
        for (int j=i+1; j<N+1; j++){
            for (int k=i; k<j; k++){
                sum += a[k];
            }
            if (sum>max){
                max = sum;
            }
            sum = 0;
        }
    }
    if (max == INT_MIN){
        cout << "How is this even possible!" << endl;
    }
    else{
        cout << max << endl;
    }
}

void doubleLoop(int a[], const int N){
    int sum = 0, max = INT_MIN;
    for (int i=0; i<N; i++){
        for (int j=i; j<N; j++){
            sum += a[j];
            if (sum>max){
                max = sum;
            }
        }
        sum = 0;
    }
    if (max == INT_MIN){
        cout << "How is this even possible!" << endl;
    }
    else{
        cout << max << endl;
    }
}



int main(){
    const int N = 5;
    int a[N] = {1, -4, 3, 2, 1};
    bruteForce(a, N);
    doubleLoop(a, N);
    return 0;
}
