#include<iostream>
using namespace std;

class Fibonacci{
  static int n;
  public:
    static void display(){
      int a = 0;
      int b = 1;
      int temp;
      cout << "Fibonacci Series : ";
      for (int i=0; i<n; i++){
        cout << a << " ";
        temp = b;
        b = a+b;
        a = temp;
      }
      cout << endl;
    }
};

int Fibonacci::n = 10;

int main(){
  Fibonacci f;
  f.display();
  return 0;
}
