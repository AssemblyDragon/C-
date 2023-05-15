// Record Breaking Day Problem in Google Kickstart

#include <iostream>
using namespace std;

int main(){
    int n=8, a[8] = {1, 2, 0, 7, 2, 0, 2, 2}, max;
    max = a[0];
    for (int i=1; i<n; i++){
        if (a[i] > a[i-1] && i<n-1 && a[i] > a[i+1]){
            max = a[i];
        }
        else if(a[i] > a[i-1] && a[i] > a[i+1]){
            max = a[i];
        }
    }
    cout << max;
}
