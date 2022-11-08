#include <cassert>
#include <iostream>
#include <string>
#include <map>

using namespace std;

/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Given a roman numeral, convert it to an integer.
*/

// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanConverter = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500},
            {'M', 1000},
        };

        return 0;
        // enum or dict для перевода char в цифру
        // перечисление char в string
        // добавлять в сумму только предыдущее значение, а текущее записывать
        // после цикла добавлять остаток
        // если текущие число больше предыдущего, то в предыдущее значение добавляем текущее - предыдущее
    }
};

void test() {
    cout << "Tests start..." << endl;

    Solution solution;

    assert(solution.romanToInt("III") == 3);
    assert(solution.romanToInt("LVIII") == 58);
    assert(solution.romanToInt("MCMXCIV") == 1994);

    cout << "Tests correct!" << endl;
}

int main() {
    test();

    return 0;
}