#include<iostream>
using namespace std;
template<class T, class U>

class Name{
    private:
        T a;
        U b;
    public:
        Name(T a, U b){
            this->a = a;
            this->b = b;
        }
        T dis(){
            return a;
        }
        U play();
};

template<class T, class U>
U Name<T, U>::play(){
    return b;
}

int main(){

    Name<int, float> n1(1, 2.3);
    cout << n1.dis() << endl;
    cout << n1.play() << endl;

    Name<char, string> n2('c', "hello");
    cout << n2.dis() << endl;
    cout << n2.play() << endl;


    return 0;
}
