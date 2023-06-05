// operator overloading - Creating a complex function

#include<iostream>
using namespace std;

class Matrix{
    private:
        int x;
        int y;
    public:
        Matrix(int x, int y){
            this->x = x;
            this->y = y;
        }
        Matrix(){
            this->x = 0;
            this->y = 0;
        }
        Matrix operator +(const Matrix &m){
            Matrix m2;
            m2.x = this->x + m.x;
            m2.y = this->y + m.y;
            return m2;   
        }
        friend Matrix operator -(const Matrix &m1, const Matrix &m2);
        void display();
};

void Matrix::display(){
    cout << this->x << this->y << endl;
}

Matrix operator -(const Matrix &m1, const Matrix &m2){
    Matrix m3;
    m3.x = m1.x - m2.x;
    m3.y = m1.y - m2.y;
    return m3;
}

int main(){

    Matrix m1(1, 2);
    Matrix m2(3, 4);
    Matrix m3 = m1 + m2;
    Matrix m4 = m1 - m2;

    m1.display();
    m2.display();
    m3.display();
    m4.display();


    return 0;
}
