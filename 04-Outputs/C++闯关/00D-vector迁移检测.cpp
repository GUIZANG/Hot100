#include <vector>
using namespace std;

class Solution {
public:
    vector<int> positiveOnly(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};
