#include<iostream>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2!=0 || high%2!=0){
            return (((int) (high-low)/2) + 1);
        }
        else{
            return ((int) (high-low)/2);
        }
    }
};

int main(){
    Solution sol;
    cout << sol.countOdds(3, 7);
    cout << sol.countOdds(2, 7);
    cout << sol.countOdds(2, 8);

    return 0;
}
