#include<iostream>
using namespace std;

class A{
    private:
        int x;
    public:
        A(){
            cout << "Enter : ";
            cin >> x;
        }
        void display(){
            cout << x << endl;
        }
        void operator ++(){
            ++x;
            cout << "PRE" << endl;
        }
        void operator ++(int){
            x++;
            cout << "POSt" << endl;
        }
};

int main(){

    A a;
    ++a;
    a.display();
    a++;
    a.display();

    return 0;
}
