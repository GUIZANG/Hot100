#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        bool res=false;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i])!=map.end()){
                if(abs(map[nums[i]]-i)<=k) {
                    res=true;
                    return res;
                }
            }
            map[nums[i]]=i;
        }
        return res;
    }
};
