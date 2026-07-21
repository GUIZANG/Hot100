#include <vector>
using namespace std;

class Solution {
public:
    void increment(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]++;
        }
    }
};
