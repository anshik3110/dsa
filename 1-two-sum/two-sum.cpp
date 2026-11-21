#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexByValue;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            if (indexByValue.count(complement)) {
                return {indexByValue[complement], i};
            }

            indexByValue[nums[i]] = i;
        }

        return {}; // The problem guarantees exactly one solution.
    }
};