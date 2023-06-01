// change the base of a number to another base

#include<iostream>
#include<climits>

using namespace std;


int pow(int n1, int n2){
    if (n2 == 0){
        return 1;
    }
    int num = n1;
    for (int i=1; i<n2; i++){
        num *= n1;
    }
    return num;
}

void convert(int num, int inputBase, int targetBase){
    int factor, mul, n=0;

    if (inputBase != 10){
        int fact, temp, digit, n2=0;
        for (int i=0;;i++){
            if (pow(10, i) > num){
                break;
            }
        
            fact = i;
        }

        for (int i=0; i<=fact; i++){
            n += num%10 * pow(inputBase, i);
            num /= 10;
        }

    num = n;

    }

    if (targetBase == 10){
        cout << endl << "Num = " <<  num << endl;
        return;
    }

    for (int i=0;;i++){
        if (pow(targetBase, i) > num){
            break;
        }
        
        factor = i;
    }
    cout << endl << "Num = ";
    for (int i=factor; i>=0; i--){
        for (int j=0;; j++){
            if (pow(targetBase, i)*j > num){
                break;
            }
            mul = j;
        }
        switch(mul){
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << mul;
                break;
        }
        num -= mul*pow(targetBase, i);
    }
    
    cout << endl;

}

int main(){
    convert(101101, 2, 16);
    
    
    
    
    return 0;

}
