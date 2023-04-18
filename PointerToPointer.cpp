#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;
    cout << p << endl << *p << endl;
    int **q;
    q = &p;
    cout << (int) q << endl << (int) *q << endl;
    cout << **q << endl;
    


    return 0;
}
