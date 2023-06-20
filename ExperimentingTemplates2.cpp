#include<iostream>

using namespace std;
template <class U, int N>

U mod(U X){
    return (X*N);
}

int main(){

    cout << mod<int, 3>(2) << endl;
    cout << (float)(mod<float, 2>(2)) << endl;

    return 0;
}
