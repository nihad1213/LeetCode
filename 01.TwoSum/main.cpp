#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (target == nums[i] + nums[j]) {
                    return vector<int> {i, j};
                }
            }
        }

        return {};
    }
};

int main() {
    Solution solution;

    vector<int> test1 = {2, 7, 11, 15};
    vector<int> res1 = solution.twoSum(test1, 9);
    cout << "[" << res1[0] << ", " << res1[1] << "]\n";

    vector<int> test2 = {3, 2, 4};
    vector<int> res2 = solution.twoSum(test2, 6);
    cout << "[" << res2[0] << ", " << res2[1] << "]\n";

    vector<int> test3 = {3, 3};
    vector<int> res3 = solution.twoSum(test3, 6);
    cout << "[" << res3[0] << ", " << res3[1] << "]\n";

    return 0;
}
