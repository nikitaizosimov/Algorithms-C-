#include <cassert>
#include <iostream>

using namespace std;

/*
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence,
such that each number is the sum of the two preceding ones, starting from 0 and 1.
*/

class Solution {
public:
    int fib(int n) {
        if (n < 2) return n;
        return fib(n - 1) + fib(n - 2);
    }
};

void test() {
    Solution solution;
    
    cout << "Tests start..." << endl;

    assert(solution.fib(-1) == -1);
    assert(solution.fib(0) == 0);
    assert(solution.fib(1) == 1);
    assert(solution.fib(4) == 3);
    assert(solution.fib(10) == 55);
    assert(solution.fib(31) == 1346269);
    
    cout << "Tests correct!" << endl;
}

int main() {
    test();
    
    return 0;
}