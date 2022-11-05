#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

/*
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums.at(i) + nums.at(j) == target) {
                    output.push_back(i);
                    output.push_back(j);
                    return output;
                }
            }
        }

        return output;
    }
};

void test() {
    cout << "Tests start..." << endl;
    vector<int> testVector = {1, 4, 7, 2, 9, 13, 0};

    vector<int> correctVector1 = {1, 3};
    assert(Solution().twoSum(testVector, 6) == correctVector1);

    vector<int> correctVector2 = {2, 4};
    assert(Solution().twoSum(testVector, 16) == correctVector2);

    vector<int> correctVector3 = {1, 4};
    assert(Solution().twoSum(testVector, 13) == correctVector3);
    
    cout << "Tests correct!" << endl;
}

int main() {
    test();

    return 0;
}