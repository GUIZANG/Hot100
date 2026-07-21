#include <vector>
using namespace std;

class Solution {
public:
    vector<int> doubleValues(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            result.push_back(nums[i]*2);
        }
        return result;
    }
};
