#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums){
        int res=-1;
        int prefix=0,su;
        for(int add:nums){
            suffix+=add;
        }
        for(int i=0;i<nums.size();i++){
            suffix-=nums[i];
            if(prefix==suffix) return i;
            prefix+=nums[i];
        }
        return res;
    }
};
