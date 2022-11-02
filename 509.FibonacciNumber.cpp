#include <cassert>
#include <iostream>

using namespace std;

/*
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence,
such that each number is the sum of the two preceding ones, starting from 0 and 1.
*/

class Solution {

//Recursion
public:
    int fibR(int n) {
        if (n < 2) return n;
        return fibR(n - 1) + fibR(n - 2);
    }
};

void test() {
    Solution solution;
    
    cout << "Tests start..." << endl;

    assert(solution.fibR(-1) == -1);
    assert(solution.fibR(0) == 0);
    assert(solution.fibR(1) == 1);
    assert(solution.fibR(4) == 3);
    assert(solution.fibR(10) == 55);
    assert(solution.fibR(31) == 1346269);
    
    cout << "Tests correct!" << endl;
}

int main() {
    test();
    
    return 0;
}