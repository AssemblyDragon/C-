// experimenting classes

#include<iostream>
using namespace std;

class student{
    int regno;
    string name;
    public:
        student(int regno, string name){
            this->regno = regno;
            this->name = name;
        }
        ~student(){
            this->display();
        }
        void display(){
            cout << "Registration Number : " << this->regno << endl;
            cout << "Name : " << this->name << endl;
        }
        void set(int regno, string name){
            this->regno = regno;
            this->name = name;
        }
};

int main(){

    student s1(1, "First Person");
    return 0;
}
