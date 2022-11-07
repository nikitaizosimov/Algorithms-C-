#include <cassert>
#include <iostream>

using namespace std;

/*
Given an integer x, return true if x is a palindrome,
and false otherwise.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x <= 0) return false;
        
        if (x < 9) return true;

        int xTemp = x;
        int xReverse = 0;

        while (xTemp != 0) {
            xReverse = (xReverse * 10) + (xTemp % 10);
            xTemp /= 10;
        }

        return xReverse == x;
    }
};

void test() {
    cout << "Tests start..." << endl;

    Solution solution;

    assert(solution.isPalindrome(121) == true);
    assert(solution.isPalindrome(-121) == false);
    assert(solution.isPalindrome(10) == false);

    cout << "Tests correct!" << endl;
}

int main() {
    test();

    return 0;
}