// all sub-arrays for a given array

#include <iostream>
using namespace std;

int main(){
    int n = 4, a[4] = {1, 4, 3, 2};
    for (int i=1; i<=n; i++){
        for (int j=0; j<n-i+1; j++){
            for (int k = j; k<j+i; k++){
                cout << a[k];
            }
            cout << " ";
        }
        cout << endl;
    }
}
