// finding the maximum subarray sum

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

int cumulativeSum(int a[], const int n){
    int b[n+1];
    b[0] = 0;
    for (int i=1; i<=n; i++){
        b[i] = b[i-1]+a[i-1];
    }
    int max = INT_MIN;
    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            if (b[i] - b[j] > max){
                max = b[i] - b[j];
            }
        }
    }
    
    if (max == INT_MIN){
        cout << "How is this even possible!" << endl;
    }
    else{
        cout << max << endl;
    }
}

int kadane(int a[], const int n){
    int b[n+1];
    b[0] = 0;
    for (int i=1; i<=n; i++){
        if (b[i-1] >= 0){
        b[i] = b[i-1] + a[i-1];
        }
        else{
            b[i] = a[i-1];
        }
    }

    int max = INT_MIN;
    
    for (int i=1; i<=n; i++){
        if (b[i] > max){
            max = b[i];
        }
    }

    if (max == INT_MIN){
        cout << "How is this even possible!" << endl;
    }
    else{
        cout << max << endl;
    }
}

int main(){
    const int N = 4;
    int a[N] = {-1, 3, 2, 5};
    bruteForce(a, N);
    doubleLoop(a, N);
    cumulativeSum(a, N);
    kadane(a, N);
    return 0;
}
