// Using Template Function

#include<iostream>
using namespace std;
template <class T>

T Greater(T a, T b){
    return (a>=b?a:b);
}

int main(){

    int n1 = 5, n2 = 6;
    float f1 = 2.5, f2 = 1.2;
    cout << Greater(n1, n2) << endl;
    cout << Greater<float>(f1, f2) << endl;

    return 0;
}
