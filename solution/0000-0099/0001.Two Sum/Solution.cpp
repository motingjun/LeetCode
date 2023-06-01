#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target-nums[i]);
            if (it != hashtable.end()) {
                return {it->second, i};
            }
            hashtable[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    const int nums[] = {2,7,11,15};
    vector<int> nums_vec(nums, nums + sizeof(nums) / sizeof(int));
    int target = 9;
    for (int v : Solution().twoSum(nums_vec, target)) {
        cout << v << endl;
    }
    return 0;
}
