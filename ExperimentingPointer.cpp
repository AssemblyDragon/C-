// testing pointers in cpp

#include<iostream>
using namespace std;

int main(){
    float a[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    char b[15] = {'a', 'b', 'c', 'd', 'e'};
    float *p1 = a;
    char *p2 = b;
    for (int i=0; i<5; i++){
        cout << (p1 + i) << " " << *(p1 + i) << "\n" << (p2 + i) << " " << *(p2 + i) << endl;
    }

    return 0;
}
