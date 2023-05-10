// finding a subarray from a given array having sum of elements equal to the sum given by user

#include <iostream>
using namespace std;

int main(){
    const int N=7;
    int a[N] = {1, 2, 3, 1, 5}, s = 12;
    int prev = 0, sum = 0;
    bool k = false;
    for (int i=0; i<N; i++){
        sum += a[i];
        if (sum > s){
            sum -= a[prev];
            prev ++;
        }
        if(sum == s){
            cout << "Starting Index : " << prev << "\nEnding Index : " << i << endl;
            k = true;
            break;
        }
    }
    if (!k){
        cout << -1;
    }

}
