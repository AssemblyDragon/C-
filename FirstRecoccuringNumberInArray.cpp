#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int reoccuringNumber(int n, int a[]){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (a[i] == a[j]){
                return i;
            }
        }
    }
    return -1;
}
int main(){
    int n = 7, a[7] = {1, 5, 3, 4, 3, 5, 6};
    cout << reoccuringNumber(n, a) << endl;
}
